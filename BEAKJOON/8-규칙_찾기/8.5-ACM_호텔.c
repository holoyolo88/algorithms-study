#include<stdio.h>
int main()
{
	int t,i,j,k;
	int h,w,n;
	int* num;
	int index=0;
	scanf("%d",&t);
	num=malloc(sizeof(int)*t);
	
	
	for(k=0; k<t; k++)
	{
		scanf("%d%d%d",&h, &w, &n);
		for(j=1; j<=w; j++)
		{for(i=1; i<=h;i++)
		{
		if((j-1)*h+i==n)
		num[index++]= i*100+j;}}
	}
	for(i=0; i<t; i++)
	{
		printf("%d\n",num[i]);
	}
}
