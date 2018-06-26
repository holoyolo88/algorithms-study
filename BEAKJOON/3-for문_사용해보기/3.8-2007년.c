#include<stdio.h>
int main()
{
    int x,sum=0;
    scanf("%d %d", &x, &sum);
    // 2007-1-1-MON
	int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	char* day[7]={"SUN","MON","TUE", "WED", "THU", "FRI","SAT"};
	
	int i;
	for(i=1; i<x;i++)
	sum+=days[i];
	
	printf("%s", day[sum%7]);
}