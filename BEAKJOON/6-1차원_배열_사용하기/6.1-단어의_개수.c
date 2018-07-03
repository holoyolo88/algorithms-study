#include<stdio.h>
int main()
{
int cnt=0;
char ch;
char prev=' ';

while((ch=getchar())!='\n')
{
    if(prev!=' '&&ch==' ') cnt++;
    prev=ch;
}

if(prev!=' ') cnt++;

printf("%d",cnt);
}
