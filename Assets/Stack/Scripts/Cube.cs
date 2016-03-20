using UnityEngine;
using System.Collections;
using DG.Tweening;

public class Cube : MonoBehaviour 
{
	public Renderer r;

	public Transform stackEffect;

	void Awake()
	{
		stackEffect.gameObject.SetActive(false);
	}

	void OnEnable()
	{
		StopAllCoroutines();
		var s = stackEffect.localScale;
		s.x = 0;
		s.z = 0;
		stackEffect.localScale = s;
	}

	void OnDisable()
	{
		StopAllCoroutines();
		stackEffect.gameObject.SetActive(false);
	}

	public void CheckFallingObject()
	{
		StartCoroutine(_CheckFallingObject());	
	}
		
	IEnumerator _CheckFallingObject()
	{
		while(true)
		{
			yield return new WaitForSeconds(1);

			if(!r.isVisible)
			{
				break;
			}
		}
		gameObject.SetActive(false);
	}

	public void DOStackEffect(float scale)
	{
		stackEffect.gameObject.SetActive(true);
		stackEffect.GetComponent<Renderer>().material.SetColor("_Color",Color.white);

		Color c = Color.white;
		c.a = 0;

		stackEffect.GetComponent<Renderer>().material.DOColor(c,"_Color",0.6f);

		stackEffect.DOScaleX(transform.localScale.x + scale,0.3f).SetLoops(2,LoopType.Yoyo);
		stackEffect.DOScaleZ(transform.localScale.z + scale,0.3f).SetLoops(2,LoopType.Yoyo);
	}
}
