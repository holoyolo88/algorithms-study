#include<stdio.h>
int main()
{
	int score[5];
	int sum=0, i;
	for(i=0; i<5; i++){
	scanf("%d", &score[i]);
	if(score[i]<40)
	score[i]=40;
	sum+=score[i];}
	printf("%d", sum/5);
}
