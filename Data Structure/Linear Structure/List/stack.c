#include<stdio.h>
#define stacksize 5
int tos=0;
void push(int* stack)
{
	int n;
	printf("입력");
	scanf("%d", &n);
	printf("%d\n",tos);
	if (tos != stacksize)
	stack[tos++]=n;
	else
	printf("stack overflow");

}

int pop(int*stack)
{
	if (tos!=0) 
	return stack[--tos];
	else
	printf("stack underflow");	
}


int main()
{
	int stack[stacksize]={0};
	push(stack);
	push(stack);
	push(stack);
	push(stack);
	push(stack);
	printf("출력 %d",pop(stack));
	printf("출력 %d",pop(stack));
	printf("출력 %d",pop(stack));
}
