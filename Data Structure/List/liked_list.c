#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    Node * next;
} Node, *pNode; //정의와 초기화 동시 가능?
pNode Head = NULL;

void menu()
{
    printf("1.삽입\n");
    printf("2.삭제\n");
    printf("3.출력\n");
    printf("종료\n");
    printf("==========\n");

}
void Add()
{
    pNode p=(pNode)malloc(sizeof(Node));
    printf("십진 정보를 입력하세요.\n");
    scanf("%d", &(p->data));
    p->next=Head;
    Head=p;
}
void Sub()
{
    pNode p=Head;
    Head=Head->next;
    free(p);
}
void Print()
{
    if(Head==NULL)
    printf("노드를 삽입하세요.\n");
    else
    {
    while(Head!=NULL){
    printf("%d", Head->data);
    Head=Head->next;}
    }
}

void main()
{
    int flag=1;    
    while(flag)
    {
        menu();
        switch(getch())
        {
            case '1':
                Add(Head);
                break;
            case '2':
                Sud(Head);
                break;
            case '3':
                Print(Head);
                break;
            case '4':
                flag=0;
                break;
            default:
                printf("다시 선택하세요.\n");
        }
    }
}