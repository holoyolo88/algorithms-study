#include<stdio.h>

int func(int n)
{
	if(n==0)
	return 0;
	else if (n<10)
	return n;
	else if ((n%10)-(n/10%10)==func(n/10))
	return 1;
	else
	return 0;
}

int main()
{
	int n;
	int i,sum=0;
	scanf("%d", &n);
	
	for(i=1; i<n; i++)
	{
		if(i<100) sum+=1;
		else sum+=func(i);
	}
	printf("%d",sum); 
}
