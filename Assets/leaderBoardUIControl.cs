using UnityEngine;
using System.Collections;
using Parse;
using System.Collections.Generic;
using UnityEngine.UI;

public class leaderBoardUIControl : MonoBehaviour {

	public float cellHeight = 120.0f;
	public GameObject cell;
	public GameObject HUD;
	public bool isProgressDone = false;
	IEnumerable<object> leaders;
	public Text scoreText;
	public int parseHighScore = 0;

	void Start(){
		
	}
	void Update(){
		
		scoreText.text = "Your high scores : "+parseHighScore;

		if(isProgressDone == true){
			isProgressDone = false;
			foreach(ParseUser leader in leaders){
				GameObject cellObj = Instantiate(cell);
				cellObj.transform.parent = gameObject.transform;
				cellObj.transform.localScale = new Vector3 (1,1,1);

				cellObj.GetComponent<cellScript>().playerNameText.text = leader.Username;
				cellObj.GetComponent<cellScript>().playerScoreText.text = ""+leader.Get<int>("highScore");
				gameObject.GetComponent<RectTransform>().sizeDelta +=new Vector2(0,cellHeight);  // add height of contentview
						
				Debug.Log(leader.Username);
			}
			HUD.SetActive (false);
		}
	}
	public void updateLeader(){

		HUD.SetActive (true);
		gameObject.GetComponent<RectTransform>().sizeDelta =new Vector2(0,0);  // add height of contentview
		foreach(Transform tr in gameObject.transform){
			Destroy (tr.gameObject);
		}

		ParseCloud.CallFunctionAsync<List<object>>("leaderCloudRequest", null).ContinueWith(t => {
			leaders = t.Result;
			isProgressDone = true;
		});

		if (ParseUser.CurrentUser != null)
		{
			var currentUser = ParseUser.CurrentUser; 
			currentUser.FetchAsync ().ContinueWith(t=>{
				parseHighScore = currentUser.Get<int>("highScore");
			});
		}
	}
}
