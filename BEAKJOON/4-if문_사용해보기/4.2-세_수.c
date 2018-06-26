#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if(a>b)
    {
    	if(c>a)	printf("%d",a);	
    	else
    	{
    		if(c>b)	printf("%d",c);
    		else	printf("%d",b);
		}
	}
    else
    {
    	if(c>b)	printf("%d",b);
    	else {
    		if(c>a)	printf("%d",c);
			else printf("%d",a); 
		}
	}
    // printf("%d", (a>b)? ((c>a)? a:((c>b)? c:b)):((c>b)? b:((c>a)? c:a)));
}