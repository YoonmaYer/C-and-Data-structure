#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
	int data;
	struct _node* next; // 다음 포인터를 가리키는 포인터
} Node;	// 구조체 선언

int main(void)
{
	Node* head = NULL;
	Node* tail = NULL;
	Node* cur = NULL;

	Node* newNode = NULL;
	int readData;

	// 데이터를 입력 받는 과정

	while (1)
	{
		printf("자연수 입력: ");
		scanf("%d ", &readData);
		if (readData < 1)	// 0이 입력되면 종료
			break;

	// 노드의 추가 과정
		newNode = (Node*)malloc(sizeof(Node));	// 동적 할당
		newNode->data = readData;
		newNode->next = NULL;

		if (head == NULL)
		{					// head포인터가 비어 있으면 노드 생성
			head = newNode;
			tail = newNode;
		}
		else
		{
			newNode->next = head;
			head = newNode;
		}

		
	}
	printf("\n");

	// 입력 받은 데이터의 출력과정
	printf("입력 받은 데이터의 전체출력! \n");
	if (head == NULL)
	{
		printf("저장된 자연수가 존재하지 않습니다.");
	}
	else
	{
		cur = head;
		printf("%d ", cur->data);	// 첫 번째 데이터 출력

		while (cur->next != NULL)	// 두 번째 이후의 데이터 출력
		{
			cur = cur->next;
			printf("%d ", cur->data); // 출력하면서 cur이 다른 노드로 넘어감
		}
	}
	printf("\n\n");

	// 메모리의 해체(삭제, 소멸)  과정
	if (head == NULL)
	{
		return 0;	// 해체할 노드 x
	}
	else
	{
		Node* delNode = head;
		Node* delNextNode = head->next;

		printf("%d을(를) 삭제합니다. \n", head->data);
		free(delNode);		// 첫 번째 노드 삭제

		while (delNextNode != NULL)		// 두 번째 이후 노드 삭제
		{
			delNode = delNextNode;
			delNextNode = delNextNode->next;

			printf("%d을(를) 삭제합니다. \n", delNextNode->data);
			free(delNode);
		}
	}
	return 0;
}