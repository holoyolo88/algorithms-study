#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100][100]={0}; //영어, 공백, 숫자 입력시 char형 한글, 한자 입력시 short형
    int i=0;
    char ch;
    for(i=0; i<100; i++)
	{gets(&arr[i][1]); // gets는 stdin으로 EOF를 포함하지 않고 read. 
	if(ch=getchar()==EOF)
	break;
	else
	arr[i][0]=ch;}
	for(i=0; arr[i][0]!='\0'; i++)
		printf("%s\n",arr+i);
}
