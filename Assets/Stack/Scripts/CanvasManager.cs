using UnityEngine;
using System;
using System.Collections;
using UnityEngine.UI;
using DG.Tweening;
using Parse;
#if UNITY_5_3
using UnityEngine.SceneManagement;
#endif

/// <summary>
/// Attached to the "Canvas" Game Object in the hierarchy. In charge to all the logic of the UI
/// </summary>
public class CanvasManager : AppAdvisoryHelper 
{
	public Image imageTransition;

	public CanvasGroup uiMenu;

	public Text STACK;
	public Text scoreText;
	public Text bestText;
	public GameObject adsScript;
	public GameObject rewardPanal;


	void Awake()
	{
		Application.targetFrameRate = 60;
		GC.Collect();
		Resources.UnloadUnusedAssets();

		imageTransition.gameObject.SetActive(true);

		imageTransition.color = new Color(0,0,0,1);

		imageTransition.DOFade(0,0.5f).OnComplete(() => {
			imageTransition.gameObject.SetActive(false);
		}).SetDelay(0.1f);

		uiMenu.alpha = 1;
		uiMenu.gameObject.SetActive(true);

		scoreText.gameObject.SetActive(false);
		bestText.gameObject.SetActive(false);
		bestText.text = "Best: " + PlayerPrefs.GetInt("BEST_SCORE",0).ToString();
		bestText.gameObject.SetActive(false);

		adsScript.GetComponent<adsShowScript> ().currentPlayCount = PlayerPrefs.GetInt("CURRENT_PLAY_COUNT",0);
		adsScript.GetComponent<adsShowScript> ().currentPlayCount += 1;
		PlayerPrefs.SetInt ("CURRENT_PLAY_COUNT", adsScript.GetComponent<adsShowScript> ().currentPlayCount);
		PlayerPrefs.Save ();


	}

	public void SetScore(int score)
	{
		scoreText.text = score.ToString();


		int bestScore = PlayerPrefs.GetInt("BEST_SCORE",0);

		if(bestScore < score)
		{
			if (ParseUser.CurrentUser != null)
			{
				var currentUser = ParseUser.CurrentUser; 
				currentUser ["highScore"] = score;
				currentUser.SaveAsync ();
			}
			PlayerPrefs.SetInt("BEST_SCORE", score);
			PlayerPrefs.Save();

			bestText.text = "Best: " + score.ToString();
		}
	}

	public void OnStart()
	{
		
		imageTransition.gameObject.SetActive(false);

		var b = uiMenu.GetComponentsInChildren<Button>();

		foreach(var but in b)
		{
			but.interactable = false;
		}

		uiMenu.DOFade(0,0.5f).OnComplete(() => {
			imageTransition.gameObject.SetActive(false);
			STACK.gameObject.SetActive(false);

			scoreText.gameObject.SetActive(true);

			scoreText.color = new Color(1,1,1,0);

			scoreText.DOFade(1,0.5f);
		});

		gameManager.DoStart();
	}

	public void OnGameOver()
	{

		imageTransition.gameObject.SetActive(false);

		scoreText.gameObject.SetActive(true);

		bestText.gameObject.SetActive(true);
	

		uiMenu.DOFade(1,1).OnComplete(() => {
		
			bool mode = adsScript.GetComponent<adsShowScript> ().isAdsBlockMode;
			if(mode == false){
				if(adsScript.GetComponent<adsShowScript> ().currentPlayCount >= adsScript.GetComponent<adsShowScript> ().maxPlayCountForShowAds){
					//rewardPanal.SetActive (true);
					adsScript.GetComponent<adsShowScript> ().ShowAd ();
					adsScript.GetComponent<adsShowScript> ().ShowRewardedAd ();

				}
			}

			var b = uiMenu.GetComponentsInChildren<Button>();

			foreach(var but in b)
			{
				but.interactable = true;
			}

			imageTransition.gameObject.SetActive(false);

		});
	}	
	public void rewardPlay()
	{
		rewardPanal.SetActive (false);
		adsScript.GetComponent<adsShowScript> ().ShowRewardedAd ();
	}
	public void rewardLater()
	{
		rewardPanal.SetActive (false);
	}

	public void DoRestart()
	{
		imageTransition.gameObject.SetActive(true);
		imageTransition.color = new Color(0,0,0,0);

		DOVirtual.DelayedCall(0.1f,() => {
			#if UNITY_5_3
			SceneManager.LoadSceneAsync(SceneManager.GetActiveScene().name,LoadSceneMode.Single);
			#else
			Application.LoadLevel(0);
			#endif
		});
	}
}
