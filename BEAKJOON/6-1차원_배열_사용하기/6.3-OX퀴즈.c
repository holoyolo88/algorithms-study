#include<stdio.h>
#include<stdlib.h> // calloc()

int main()
{
	int n,i,j;
	char temp;
	int** arrptr;
	scanf("%d", &n);
	getchar();
	arrptr=(int**)malloc(sizeof(int*)*n);
	
	for(i=0; i<n; i++)
	{
	arrptr[i]=(int*)calloc(81,sizeof(int));
	
	for(j=0;(temp=getchar())!='\n'; j++){
	arrptr[i][j]=temp;
	if(temp=='O') arrptr[i][79]+=1; // 연속된 O의 개수 == 점수 
	else arrptr[i][79]=0; // 0으로 점수 초기화 
	arrptr[i][80]+=arrptr[i][79]; // 점수의 총합 저장 
	}
	}
	
	for(i=0; i<n; i++)
	printf("%d\n", (int)arrptr[i][80]);
	
}