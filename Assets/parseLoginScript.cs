using UnityEngine;
using System.Collections;
using Parse;
using System.Collections.Generic;
using UnityEngine.UI;
using System.Threading.Tasks;


public class parseLoginScript : MonoBehaviour {
	
	public InputField nameInput;
	public GameObject HUD;
	public GameObject status;
	public GameObject button;
	public bool isSignupDone = false;
	public bool isProgressDone = false;

	IEnumerator loginToParse(){
		isProgressDone = false;
		status.SetActive(false);
		HUD.SetActive (true);
		button.SetActive (false);
		var user = new ParseUser()
		{
			Username = nameInput.text,
			Password = "pass",
			Email = nameInput.text+"@mail.com"
		};
		user["highScore"] = 0;
		Task signUpTask = user.SignUpAsync ();
		signUpTask.ContinueWith(t =>{

			if(t.IsFaulted == false || t.IsCanceled == false){
				
				Debug.Log("signup done");
				isSignupDone = true;
			}else{
				Debug.Log("signup error");

				isSignupDone = false;
			}
			isProgressDone = true;
		});
		yield return signUpTask;




	}
	public void setFirstPlay(){
		StartCoroutine (loginToParse ());

	}
	void Update(){
		if(isProgressDone == true){
			isProgressDone = false;
			if (isSignupDone == true) {
				PlayerPrefs.SetString ("PLAYER_NAME",nameInput.text);
				PlayerPrefs.SetInt ("FIRST_PLAY_INT",1);
				PlayerPrefs.Save ();
				gameObject.SetActive(false);
			} else {
				HUD.SetActive (false);
				status.SetActive(true);
				button.SetActive (true);
			}
		}
	}
}
