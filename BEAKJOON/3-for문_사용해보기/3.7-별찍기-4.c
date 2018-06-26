#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int i,j;
    for(i=N; i>=1; i--){
        for(j=1; j<=N-i; j++)
        printf(" ");
        for(j=1; j<=i; j++)
        printf("*");
        printf("\n");
        }
}