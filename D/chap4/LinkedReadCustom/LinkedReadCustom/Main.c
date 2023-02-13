#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
	int data;
	struct _node* next; // ���� �����͸� ����Ű�� ������
} Node;	// ����ü ����

int main(void)
{
	Node* head = NULL;
	Node* tail = NULL;
	Node* cur = NULL;

	Node* newNode = NULL;
	int readData;

	// �����͸� �Է� �޴� ����

	while (1)
	{
		printf("�ڿ��� �Է�: ");
		scanf("%d ", &readData);
		if (readData < 1)	// 0�� �ԷµǸ� ����
			break;

	// ����� �߰� ����
		newNode = (Node*)malloc(sizeof(Node));	// ���� �Ҵ�
		newNode->data = readData;
		newNode->next = NULL;

		if (head == NULL)
		{					// head�����Ͱ� ��� ������ ��� ����
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

	// �Է� ���� �������� ��°���
	printf("�Է� ���� �������� ��ü���! \n");
	if (head == NULL)
	{
		printf("����� �ڿ����� �������� �ʽ��ϴ�.");
	}
	else
	{
		cur = head;
		printf("%d ", cur->data);	// ù ��° ������ ���

		while (cur->next != NULL)	// �� ��° ������ ������ ���
		{
			cur = cur->next;
			printf("%d ", cur->data); // ����ϸ鼭 cur�� �ٸ� ���� �Ѿ
		}
	}
	printf("\n\n");

	// �޸��� ��ü(����, �Ҹ�)  ����
	if (head == NULL)
	{
		return 0;	// ��ü�� ��� x
	}
	else
	{
		Node* delNode = head;
		Node* delNextNode = head->next;

		printf("%d��(��) �����մϴ�. \n", head->data);
		free(delNode);		// ù ��° ��� ����

		while (delNextNode != NULL)		// �� ��° ���� ��� ����
		{
			delNode = delNextNode;
			delNextNode = delNextNode->next;

			printf("%d��(��) �����մϴ�. \n", delNextNode->data);
			free(delNode);
		}
	}
	return 0;
}