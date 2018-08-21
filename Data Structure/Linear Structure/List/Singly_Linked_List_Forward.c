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
	printf("����� �����ϼ���.\n");
	printf("1. ����\n");
	printf("2. ����\n");
	printf("3. ���\n");
	printf("4. ����\n");
	printf("==========\n");

}
void Add()
{
	pNode p = (pNode)malloc(sizeof(Node));
	printf("���� ������ �Է��ϼ���.\n");
	scanf("%d", &(p->data));
	p->next = Head;
	Head = p;
}
void Sub()
{
	if (Head == NULL)
		printf("��带 �����ϼ���.\n");
	else{
	pNode p = Head;
	Head = p->next; //Head->next�� �� ����? 
	free(p);
	}
}
void Print()
{
	if (Head == NULL)
		printf("��带 �����ϼ���.\n");
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
			flag = 0;
			break;
		default:
			printf("�ٽ� �����ϼ���.\n");
		}
		getchar();
	}
}