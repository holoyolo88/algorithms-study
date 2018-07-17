#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct info {
	int index;
	char name[10];
	int age;
	int phonenum;
	char address[20];
	struct info * next;
}Node, *pNode;

pNode head = NULL;

void Add()
{
	pNode newnode = (pNode)malloc(sizeof(Node));
	printf("번호 이름 나이 전화번호를 공백을 기준으로 입력하세요.\n"); // 주 소 
	scanf("%d %s %d %d", &(newnode->index), newnode->name, &(newnode->age), &(newnode->phonenum));
	newnode->next = NULL;

	if (head == NULL)
	{
		head = newnode;
	}
	else {

		pNode Next = head;
		pNode Prev = NULL;

		while (Next != NULL && strcmp(Next->name, newnode->name)<0)
		{
			Prev = Next;
			Next = Next->next;
		}

		newnode->next = Next;
		if (Prev != NULL)	Prev->next = newnode;
		else head = newnode;
	}

}
void Print()
{
	pNode tmp = head;
	while (tmp != NULL)
	{
		printf("%d %s %d %d\n", tmp->index, tmp->name, tmp->age, tmp->phonenum);
		tmp = tmp->next;
	}
}

void Sort()
{
	if (head == NULL) printf("Error\n");

	else if (head->next == NULL) return;

	else {
		pNode newhead = NULL;

		pNode p=head;
		
		while (head != NULL)
		{
			if (newhead == NULL)
			{
				//p->next = newhead;
				//newhead->next = p;
				head = p->next;
				newhead = p;
				p->next = NULL;
			}
			else {
				
				head = head->next;

				pNode Next = newhead;
				pNode Prev = NULL;

				while (Next != NULL && Next->index< p->index)
				{
					Prev = Next;
					Next = Next->next;
				}

				p->next = Next;
				if (Prev != NULL)	Prev->next = p;
				else newhead= p;
				printf("%d %s\n", newhead->next->index, newhead->next->name);
				printf("%d %s\n", newhead->index, newhead->name);
			}
			p = head;
		}

		head = newhead;
	}

}

void menu()
{
	printf("==========\n");
	printf("기능을 선택하세요.\n");
	printf("1. 삽입\n");

	printf("3. 출력\n");
	printf("4. 정렬\n");
	printf("5. 종료\n");

	printf("==========\n");

}
int main()
{
	int flag = 1;
	while (flag)
	{
		menu();
		switch (getchar())
		{
		case '1':
			Add();
			Print();
			break;
		case '3':
			Print();
			break;
		case '4':
			Sort();
			break;
		case '5':
			flag = 0;
			break;
		default:
			printf("다시 선택하세요.\n");
		}
		getchar();
	}
}
