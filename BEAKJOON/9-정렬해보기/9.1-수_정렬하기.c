#include<stdio.h>
#include<stdlib.h>
void swap(int *a, int * b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int n;
	scanf("%d", &n);
	int* arr=(int *)malloc(sizeof(int)*n);
	
	int i,j,k;
	
	for(i=0; i<n; i++)
	scanf("%d", &arr[i]);
	
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-i-1; j++)
		{if(arr[j]>arr[j+1])
		swap(arr+j, arr+(j+1));}
	}
	
	for(i=0; i<n; i++)
	printf("%d\n", arr[i]);
	free(arr);
}
