#include<stdio.h>
#include<math.h>
int func(int arr[],int sets)
{
	int i;
	for(i=0; i<10; i++)
	{
	if(i==6 || i==9) continue;
	
	if(arr[i]!=sets&&arr[i]>sets)
	return func(arr,sets+1);
	}
	return sets;
}

int main(){
	int n;
	scanf("%d", &n);
	int arr[10]={0};
	int sets,dupsets;
	int max,min;
	
	if(n==0) printf("1");
	
	while(n>0)
	{	
	arr[n%10]+=1;
	n/=10;
	}
	
	sets=func(arr,0);
	
	max=(arr[9]>arr[6]) ? arr[9]:arr[6];
	min=(arr[9]>arr[6]) ? arr[6]:arr[9];
	
	dupsets=(max-min+1)/2;
	
	if(sets>min+dupsets)	printf("%d",sets);
	else			printf("%d", min+dupsets);
}
