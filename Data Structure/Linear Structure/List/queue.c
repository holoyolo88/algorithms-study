#include<stdio.h>
#define queuesize 5

int pre=0;
int suf=0;

void push(int* queue)
{
	int n;
	printf("�Է�");
	scanf("%d", &n);
	
	if (suf < queuesize)
	queue[suf++]=n;
	else
	printf("queue overflow");

}

void pop(int* queue)
{
	if (pre<suf) 
	printf("��� %d\n",queue[pre++]);
	else
	printf("queue underflow");	
}


int main()
{
	int queue[queuesize]={0};
	push(queue);
	push(queue);
	
	pop(queue);
	pop(queue);
	pop(queue);
	push(queue);
	push(queue);
	push(queue);
}

