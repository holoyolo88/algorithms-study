#include<stdio.h>

void push(int* stack, int* tos,int buffer)
{
	//if(*tos==)
	printf("오류\n");
	else
	stack[*tos++]=malloc(sizeof(int));
	*stack[tos]=buffer;
	
}
int pop(int* tos)
{
	int buffer;
	if(*top==0)
	printf("오류\n");
	else
	buffer=stack[*--tos];
	free(stack[*tos--]);
	return buffer;
	 
}
int main()
{
	int* stack;
	int tos;
	int buffer;
	
	while(1)   
	{
		char * selectf=gets();
	if (strcmp(selectf,"push"))
	{
		push(stack, tos, buffer)
	}
	else if (strcmp(selectf,"pop"))
	{
		printf(pop(tos));
	}
	else if (strcmp(selectf,"size"))
	{
		printf("%d",tos-1);
	}
	else if (strcmp(selectf,"empty"))
	{
		if(tos==0)
		printf("0\n");
		else
		printf("1\n");
	}
	else if (strcmp(selectf,"top"))
	{
		if(tos==0)
		printf("%d",-1);
		else
		printf("%d", stack[tos-1]);
	}
	else printf("오류\n")}
}
