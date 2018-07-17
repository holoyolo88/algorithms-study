#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node * next;
} Node, *pNode;
pNode Head = NULL;
void menu()
{
	printf("==========\n");
	printf("기능을 선택하세요.\n");
	printf("1. 삽입\n");
	printf("2. 삭제\n");
	printf("3. 출력\n");
	printf("4. 방향전환\n");
	printf("5. 종료\n");
	
	printf("==========\n");

}
void Add()
{
	pNode p = (pNode)malloc(sizeof(Node));
	printf("십진 정보를 입력하세요.\n");
	scanf("%d", &(p->data));
	p->next = Head;
	Head = p;
}
void Sub()
{
	if (Head == NULL)
		printf("노드를 삽입하세요.\n");
	else{
	pNode p = Head;
	Head = p->next; //Head->next는 왜 오류? 
	free(p);
	}
}
void Print()
{
	if (Head == NULL)
		printf("노드를 삽입하세요.\n");
	else
	{
		pNode Current = Head;
		while (Current != NULL) {
			printf("%d ", Current->data);
			Current = Current->next;
		}
		printf("\n");
	}
}
void Reverse()
{
	if (Head == NULL)
		printf("노드를 삽입하세요.\n");
	else
	{
	pNode Current = Head;
	pNode Previous = NULL;
	pNode Next = Head;
	
	while(Next!=NULL)
	{
		Next=Next->next;
		Current->next=Previous;
		Previous = Current;
		Current = Next;
	}
	
	Head=Previous;
	}
	
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
			break;
		case '2':
			Sub();
			break;
		case '3':
			Print();
			break;
		case '4':
			Reverse();
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
