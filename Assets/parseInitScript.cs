using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Parse;

public class parseInitScript : MonoBehaviour {

	public string iosLink ="";
	public string androidLink ="";
	public string webLink ="";

	// Use this for initialization
	void Start () {



		var query = ParseObject.GetQuery ("config");
		query.FirstAsync().ContinueWith(t =>
			{
				ParseObject obj = t.Result;
				iosLink = obj.Get<string>("iosLink");
				androidLink = obj.Get<string>("androidLink");
				webLink = obj.Get<string>("webLink");
				Debug.Log(obj.ObjectId+":"+ webLink);

			});
		
	}
	

}
