#include<stdio.h>
void main()
{
	char arr[100];
	int n,i;
	char ch;
	int cnt=0;
	scanf("%d",n);
		for(i=0; i<n; i++)
		{
			scanf("%d",&arr[i]);
			for(i=0; ch=getchar()!='\n'; i++)
			arr[i]=ch;
			

		}
}
