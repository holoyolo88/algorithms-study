#include<stdio.h>
#define queuesize 5

int pre=0;
int suf=0;

void push(int* queue)
{
	int n;
	printf("입력");
	scanf("%d", &n);
	
	if (suf < queuesize)
	queue[suf++]=n;
	else
	{
		if(suf%queuesize < pre) queue[suf++]=n;
		else printf("1오류");
	}

}

void pop(int* queue)
{
	if (pre<suf) 
	printf("출력 %d\n",queue[pre++]);
	else{
		if()
		printf("출력 %d\n",queue[(pre%queuesize)++]);
	}	
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
