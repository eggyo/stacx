using UnityEngine;
using System.Collections;

public class ButtonParseLeaderBoard : AppAdvisoryButtonBase {

	public GameObject leaderPanal;
	public GameObject leaderContent;

	public override void OnClicked()
	{
		leaderPanal.SetActive (true);
		leaderContent.GetComponent<leaderBoardUIControl> ().updateLeader ();
	}
	public void hideLeaderBoard()
	{
		leaderPanal.SetActive (false);
	}
}
