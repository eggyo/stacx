using UnityEngine;
using System.Collections;
using System;
using ChartboostSDK;

public class adsShowScript : MonoBehaviour
{
	public bool isAdsBlockMode = false;
	public string adsBlockTicks;
	public long adsBlockHour = 1;
	public int currentPlayCount = 0;
	public int maxPlayCountForShowAds = 3;
	public long timeStamp;
	public string strtimeStamp;

	void Start () {
		
		currentPlayCount = PlayerPrefs.GetInt("CURRENT_PLAY_COUNT",0);
		Chartboost.cacheRewardedVideo(CBLocation.Default);
		Chartboost.cacheInterstitial (CBLocation.Default);
	}
	void Update () {
		adsBlockModeChecking ();

	}
	void adsBlockModeChecking(){
		adsBlockTicks = PlayerPrefs.GetString("ADS_BLOCK_TICKS");
		timeStamp = System.DateTime.Now.Ticks;
		strtimeStamp = ""+timeStamp;
		if (timeStamp < long.Parse(adsBlockTicks)) {
			//ads block mode
			isAdsBlockMode = true;
		} else {
			isAdsBlockMode = false;
		}
	}

	public void ShowAd()
	{
		/*
		if (Advertisement.IsReady())
		{
			Advertisement.Show();
		}*/
		Chartboost.showInterstitial(CBLocation.Default);
		PlayerPrefs.SetInt ("CURRENT_PLAY_COUNT", 0);
		PlayerPrefs.Save ();
		currentPlayCount = PlayerPrefs.GetInt("CURRENT_PLAY_COUNT");
		Debug.Log ("this could be show ad");
	}
	void didCloseInterstitial(CBLocation location) {
		Debug.Log ("didCloseInterstitialEvent");

	}
	void didDisplayInterstitial(CBLocation location){
		Debug.Log ("didDisplayInterstitialEvent");

	}
	public void ShowRewardedAd()
	{/*
		if (Advertisement.IsReady("rewardedVideoZone"))
		{
			var options = new ShowOptions { resultCallback = HandleShowResult };
			Advertisement.Show("rewardedVideoZone", options);
		}*/
		Chartboost.showRewardedVideo(CBLocation.Default);

		Debug.Log ("this could be show ad reward video");
		PlayerPrefs.SetInt ("CURRENT_PLAY_COUNT", 0);
		PlayerPrefs.Save ();
		currentPlayCount = PlayerPrefs.GetInt("CURRENT_PLAY_COUNT");
	}
	void didCompleteRewardedVideo(CBLocation location, int reward){

		Debug.Log ("complete reward:"+location);
		long rewardTicks = adsBlockHour * 60L * 60L * 1000L * 10000L;
		long timeStamp_ = System.DateTime.Now.Ticks + rewardTicks;

		PlayerPrefs.SetString ("ADS_BLOCK_TICKS", ""+timeStamp_);
		PlayerPrefs.Save ();
	}
	void didDisplayRewardedVideo(CBLocation location){
		Debug.Log ("show reward:"+location);
	}
	void OnEnable() {
		// Listen to all impression-related events
		//Chartboost.didDismissInterstitial += didDismissInterstitial;
		Chartboost.didCloseInterstitial += didCloseInterstitial;
		Chartboost.didDisplayInterstitial += didDisplayInterstitial;

		//Chartboost.didDismissRewardedVideo += didDismissRewardedVideo;
		//Chartboost.didCloseRewardedVideo += didCloseRewardedVideo;
		//Chartboost.didClickRewardedVideo += didClickRewardedVideo;
		//Chartboost.didCacheRewardedVideo += didCacheRewardedVideo;
		Chartboost.didCompleteRewardedVideo += didCompleteRewardedVideo;
		Chartboost.didDisplayRewardedVideo += didDisplayRewardedVideo;

	}
	void OnDisable() {
		Chartboost.didCloseInterstitial -= didCloseInterstitial;
		Chartboost.didDisplayInterstitial -= didDisplayInterstitial;

		Chartboost.didCompleteRewardedVideo -= didCompleteRewardedVideo;
		Chartboost.didDisplayRewardedVideo -= didDisplayRewardedVideo;
	}
	/*
	private void HandleShowResult(ShowResult result)
	{
		switch (result)
		{
		case ShowResult.Finished:
			Debug.Log("The ad was successfully shown.");
			//
			// YOUR CODE TO REWARD THE GAMER
			long rewardTicks = adsBlockHour * 60L * 60L * 1000L * 10000L;
			long timeStamp = System.DateTime.Now.Ticks + rewardTicks;

			PlayerPrefs.SetInt ("ADS_BLOCK_TICKS", (int)timeStamp);
			PlayerPrefs.Save ();

			break;
		case ShowResult.Skipped:
			Debug.Log("The ad was skipped before reaching the end.");
			break;
		case ShowResult.Failed:
			Debug.LogError("The ad failed to be shown.");
			break;
		}
	}*/
}