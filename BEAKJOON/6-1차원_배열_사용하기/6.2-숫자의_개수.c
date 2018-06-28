#include<stdio.h>
int main()
{
	int a,b,c;
	int arr[10]={0};
	int i;
	scanf("%d %d %d", &a, &b, &c);
	long long sum=a*b*c;
	while(sum>0)
	{
		arr[sum%10]+=1;
		sum/=10;
	}
	for(i=0; i<10; i++)
	{
	printf("%d\n",arr[i]);}
}
