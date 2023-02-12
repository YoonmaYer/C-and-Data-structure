#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "NameCard.h"

int main(void)
{
	List list;
	NameCard* pcard;
	ListInit(&list);

	pcard = MakeNameCard("이진수", "010-1111-2222");
	LInsert(&list, pcard);

	pcard = MakeNameCard("십진수", "010-1111-2222");
	LInsert(&list, pcard);

	pcard = MakeNameCard("십육진수", "010-1111-2222");
	LInsert(&list, pcard);

	// 이진수의 정보를 조회하여 출력
	if (LFirst(&list, &pcard))
	{
		if (!NameCompare(pcard, "이진수"))
		{
			ShowNameCardInfo(pcard);
		}
		else
		{
			while (LNext(&list, &pcard))
			{
				if (!NameCompare(pcard, "이진수"))
				{
					ShowNameCardInfo(pcard);
					break;
				}
			}
		}
	}
	
	//십이진수의 정보를 조회하여 변경
	if (LFirst(&list, &pcard))
	{
		if (!NameCompare(pcard, "십이진수"))
		{
			ChangePhoneNum(pcard, "010-1234-5678");
		}
		else
		{
			while (LNext(&list, &pcard))
			{
				if (!NameCompare(pcard, "십이진수"))
				{
					ChangePhoneNum(pcard, "010-9999-9999");
					break;
				}
			}
		}
	}

	// 십육진수의 정보를 조회하여 삭제
	if (LFirst(&list, &pcard))
	{
		if (!NameCompare(pcard, "십육진수"))
		{
			pcard = LRemove(&list);
			free(pcard);
		}
		else
		{
			while (LNext(&list, &pcard))
			{
				if (!NameCompare(pcard, "십육진수"))
				{
					pcard = LRemove(&list);
					free(pcard);
					break;
				}
			}
		}
	}

	// 모든 사람의 정보 출력
	printf("현재 데이터의 수: %d \n", LCount(&list));

	if (LFirst(&list, &pcard))
	{
		ShowNameCardInfo(pcard);

		while (LNext(&list, &pcard))
			ShowNameCardInfo(pcard);
	}
	return 0;
}