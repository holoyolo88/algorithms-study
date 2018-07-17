#include<stdio.h>
#include<math.h>
int main()
{
int  m,n;
double sqrtm, sqrtn;

int sum=0;
int i;

scanf("%d%d",&m, &n);
sqrtm=sqrt((double)m);
sqrtn=sqrt((double)n);
if(sqrtm>(int)sqrtm)
sqrtm = round(sqrt((double)m)+0.5);

if(sqrtn>(int)sqrt)
sqrtn = round(sqrt((double)n)-0.5);


for( i = (int)sqrtm; i <= (int)sqrtn; i++)
{
sum +=i*i;
}

if(cnt!=0)
printf("%d\n%d", sum,(int)sqrtm*(int)sqrtm);
else
printf("-1");
}
