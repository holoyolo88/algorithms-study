#include<stdio.h>
int main()
{
	char lowerch[26][2]={0};
	char ch;
	int i,j;
	for(i=0; i<26; i++)
	{lowerch[i][0]=i+97;
	lowerch[i][1]=-1;}

	for(i=0; (ch=getchar())!='\n';i++)
	{
	for(j=0; j<26; j++)
	{
	if(lowerch[j][0]==ch && lowerch[j][1]==-1) {
	lowerch[j][1]=i;
	break;}
	}}
	
	for(i=0; i<26; i++)
	printf("%d ", lowerch[i][1]); 
}
