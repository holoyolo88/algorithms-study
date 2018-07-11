#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,k;
	int t;
	int cnt;
	int flag=0;
	int** arr=NULL;
	scanf("%d", &t);
	arr=(int**)malloc(sizeof(int*)*t);
	for(i=0; i<t; i++)
	{
	arr[i]=malloc(sizeof(int)*5);
	scanf("%d %d %d %d", &arr[i][0], &arr[i][1],&arr[i][2],&arr[i][3]);
	printf("%d %d %d %d\n", arr[i][0], arr[i][1],arr[i][2],arr[i][3]);
	}	
	
	for(k=0; k<t; k++)
	{
	for(i=1, j=1,cnt=1; i<=arr[k][0]+1  && j<=arr[k][1]+1; i++,j++,cnt++)
	{
	if(i>arr[k][0]) i=1;
	if(j>arr[k][1]) j=1;
	printf("%2d : %2d\n",i,j);
	if(i==arr[k][2] && j==arr[k][3])
	{
	arr[k][4]=cnt;
	printf("cnt %d",cnt); 
	flag= 1;
	break;
	}
	}
	if(flag!=1)
	printf("-1"); // 어떻게 알 수 있을 까? 
	}
	
//	for(i=0; i<t; i++)
//	{
//	free(*(arr+i));
//	}	
}

