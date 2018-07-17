#include<stdio.h>
#include<math.h>
int main()
{
long long min,max;
double sqrtmin, sqrtmax;

int cnt=0;
int i;

scanf("%lld%lld",&min, &max);
sqrtmin=sqrt((double)min);
sqrtmax=sqrt((double)max);
if(sqrtmin>(int)sqrtmin)
sqrtmin = round(sqrt((double)min)+0.5);

if(sqrtmax>(int)sqrtmax)
sqrtmax = round(sqrt((double)max)-0.5);


for( i = (int)sqrtmin; i <= (int)sqrtmax; i++)
{
	cnt++;
}

printf("%lld", max-min-cnt+1);
}
