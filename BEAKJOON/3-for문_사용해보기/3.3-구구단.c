#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int i;
    for(i=1; i<=9; i++)
    printf("%d * %d = %d\n",N,i,N*i);
}