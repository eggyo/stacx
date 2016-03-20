using UnityEngine;
using System.Collections;

/// <summary>
/// Attached to the button rate. 
/// </summary>
public class ButtonRate : AppAdvisoryButtonBase
{
	public GameObject parseObj;
	/// <summary>
	/// URL for iOS device, change the URL
	/// </summary>
	public string moreGamesIosURL = "";
	/// <summary>
	/// URL for Android device, change the URL
	/// </summary>
	public string moreGamesAndroidURL = "";
	/// <summary>
	/// URL for other platforms, change the URL
	/// </summary>
	public string moreGamesOtherPlatformsURL = "";
	/// <summary>
	/// Call when the button is pressed
	/// </summary>
	public override void OnClicked()
	{
		if(Application.platform == RuntimePlatform.IPhonePlayer )
		{
			moreGamesIosURL = parseObj.GetComponent<parseInitScript> ().iosLink;
			Application.OpenURL(moreGamesIosURL);
		}
		else if(Application.platform == RuntimePlatform.Android)
		{
			moreGamesAndroidURL = parseObj.GetComponent<parseInitScript> ().androidLink;
			Application.OpenURL(moreGamesAndroidURL);
		}
		else
		{			
			moreGamesOtherPlatformsURL = parseObj.GetComponent<parseInitScript> ().webLink;
			Application.OpenURL(moreGamesOtherPlatformsURL);
		}
	}
}
