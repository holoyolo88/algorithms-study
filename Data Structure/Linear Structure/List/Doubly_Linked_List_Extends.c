#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/*
작성일 : 2018-8-21
작성자 : holoyolo88
*/

/*구조체 정의*/
typedef struct node {
	char name[15];
	int score;
	struct node* next;
	struct node* prev;
}Node, *pNode;

pNode head = NULL;
pNode tail = NULL;

/*head부터 노드 추가*/
void add_head(char* name, int score)
{
	pNode newnode = (pNode)malloc(sizeof(Node));
	strcpy(newnode->name, name);
	newnode->score = score;

	if (head == NULL){
		newnode->next = NULL;
		newnode->prev = NULL;
		head = newnode;
		tail = newnode;
	}
	else {
		newnode->next = head;
		newnode->prev = NULL;
		head->prev = newnode;
		head = newnode;
	}
}
/* tail부터 노드 추가*/
void add_tail(char* name, int score)
{
	pNode newnode = (pNode)malloc(sizeof(Node));
	strcpy(newnode->name, name);
	newnode->score = score;
	// 노드가 하나도 없을 경우
	if (tail == NULL) {
		newnode->prev = NULL;
		newnode->next = NULL;
		head = newnode;
		tail = newnode;
	}
	else {
		newnode->prev = tail;
		newnode->next = NULL;
		tail->next = newnode;
		tail = newnode;
	}
}
/*중간에 노드 추가*/
void add_middle(char* name, int score)
{
	pNode newnode = (pNode)malloc(sizeof(Node));
	strcpy(newnode->name, name);
	newnode->score = score;
	// 노드가 하나도 없을 경우
	if (head == NULL) {
		newnode->next = NULL;
		newnode->prev = NULL;
		head = newnode;
		tail = newnode;
	}else {
		pNode tmp = head;
		while (tmp != NULL && tmp->score < score )
		{
			tmp = tmp->next;
		}
		if (tmp == NULL) {
			add_tail(name, score);
			free(newnode);
		}
		else {
			pNode prev = tmp->prev;
			pNode next = tmp;
			newnode->next = tmp;
			newnode->prev = prev;
			prev->next = newnode;
			tmp->prev = newnode;
		}
	}
	
}
// head부터 노드 삭제
void sub_head()
{
	if (head == NULL)
	{		printf("노드 없음\n"); return;
	}
	pNode delnode;
	delnode = head;
	head = head->next;
	head->prev = NULL;
	free(delnode);
}
// tail부터 노드 삭제
void sub_tail()
{
	if (head == NULL)
	{		printf("노드 없음\n"); return;
}
	pNode delnode;
	delnode = tail;
	tail = tail->prev;
	tail->next = NULL;
	free(delnode);
}
/* 중간 노드 삭제*/
void sub_middle(int score)
{
	if (head == NULL)
	{		printf("노드 없음\n"); return;
}
	pNode delnode;
	delnode = head;
	head = head->next;

	while (delnode != NULL && delnode->score != score)
	{
		delnode = delnode->next;
	}
	if (delnode == NULL) {
		printf("해당 노드 없음\n");
	}
	// head앞에 노드를 추가하거나 tail 뒤에 노드를 추가하는 경우
	else {
		pNode prev = delnode->prev;
		pNode next = delnode->next;

		if (prev != NULL && next != NULL)
		{	prev->next = next;
		next->prev = prev;
		free(delnode);
		}
		else if (prev == NULL && next == NULL)
		{
			head = NULL;
			tail = NULL;
			free(delnode);
		}
		else {
			if (prev == NULL)
			{
				head = next;
				head->prev = NULL;
				free(delnode);
			}
			else if (next == NULL) {
			tail = prev;
			tail->next = NULL;
			free(delnode);
		}
		}
	}

}
/* 모든 노드 삭제*/
void sub_all()
{
	pNode delnode;
	while (delnode != NULL){
		delnode = head;
	head = head->next;
	free(delnode);
	delnode = delnode->next;
	}
}
/*모든 노드 출력*/
void print()
{
	pNode tmp = head;
	if (tmp == NULL)
		printf("노드 없음\n");
	while (tmp != NULL)
	{
		printf("%s : %d\n", (char*)(tmp->name),tmp->score);
		tmp = tmp->next;
	}
}
/* 역 정렬*/
void reverse()
{

	pNode tmp = head;
	pNode temp;
	if (tmp == NULL)
		printf("노드 없음\n");
	while (tmp != NULL)
	{
		temp = tmp->next;
		tmp->next = tmp->prev;
		tmp->prev = temp;
		tmp = tmp->prev;
	}
	tmp = head;
	head = tail;
	tail = tmp;
}


int main()
{
	int n;
	char name[15];
	int score;
	while (1)
	{
		printf("기능 선택\n");
		printf("1. 삽입 2. 삭제 3. 출력 4. 종료 5. 반전\n");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			printf("기능 선택\n");
			printf("1. head 삽입 2. tail 삽입 3. 오름차순 정렬 삽입\n");
			scanf("%d", &n);
			printf("이름 :");
			scanf("%s", name);
			printf("점수 :");
			scanf("%d", &score);
			if(n == 1)add_head(name, score);
			else if (n == 2) add_tail(name, score);
			else add_middle(name, score);
			print();
			break;
		case 2:
			printf("기능 선택");
			printf("1. head 삭제 2. tail 삭제 3. 특정 노드 삭제 4. 모든 노드 삭제\n");
			scanf("%d", &n);
			if (n==1) sub_head();
			else if (n == 2) sub_tail();
			else if (n == 3) {
				printf("노드 점수 입력\n");
				scanf("%d", &n); sub_middle(n);
			}
			else sub_all();
			print();
			break;
		case 3:
			print();
			break;
		case 4:
			exit(0);
		case 5:
		reverse();
		print();
			break;
		default:
			printf("무효한 입력\n");
		}
	}
}