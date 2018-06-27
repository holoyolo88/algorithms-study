#include<stdio.h>
int main()
{
	int N,i;
	int* arr;
	int max=0;
	double sum;
	
	scanf("%d", &N);
	arr=malloc(sizeof(int)*N);
	
	for(i=0; i<N; i++)
	{
		scanf("%d", arr+i);
		if(max<*(arr+i))
		max=*(arr+i);
	}
	for(i=0; i<N; i++)
	{
		sum+=(double)*(arr+i)/max*100;
	}
	printf("%.2lf", sum/N);
}
