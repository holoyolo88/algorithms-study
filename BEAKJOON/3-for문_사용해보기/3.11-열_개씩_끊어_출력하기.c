#include<stdio.h>
int main(void)
{
	char arr[100];
	int i=0;
	gets(arr);
	
	while(arr[i]!='\0')
	{
	printf("%c",arr[i++]);
	if(i%10==0)	printf("\n");
	}	
}