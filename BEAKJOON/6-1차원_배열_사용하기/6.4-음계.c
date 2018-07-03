#include<stdio.h>

int main()
{
	int arr[8];
	int i;
	for(i=0; i<8; i++)
	scanf("%d", &arr[i]);
	
	if(arr[0]==1){
		for(i=0; i<8; i++){
		if(arr[i]!=i+1){printf("mixed"); break;}}
		if(i==8)printf("ascending");}
	
	else if(arr[0]==8){
	for(i=1; i<8; i++){
	if(arr[i]+i!=8) {printf("mixed"); break;}
	}
	if(i==8)printf("descending");}
	
	else printf("mixed");
}
