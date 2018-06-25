#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if(b%3==0 || b==7) // 무한 소수의 경우 
    printf("%.30lf",(double)a/b);
	else
    printf("%g",(double)a/b); //소수점 이하 자리 개수 자동 지정 
}