#include<stdio.h>
int main()
{
	int c, N;
	int i;
	
	int** arrptr;
	double* avg;
	
	scanf("%d",&c);
	arrptr=malloc(sizeof(int*)*c);
	avg=malloc(sizeof(double)*c);
	
	for(i=0; i<c; i++){
	scanf("%d", &N);
	arrptr[i]=malloc(sizeof(int)*(N));
	
	for(i=0; i<N; i++){
	scanf("%d", (arrptr+i)+i);
	avg[i]=*((arrptr+i)+i)*N/100;}
	}
	
	for(i=0; i<N; i++)
	printf("%3.lf%%",*(avg+i));
}
