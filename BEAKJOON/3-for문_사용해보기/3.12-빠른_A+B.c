int main()
{
    int T;
	int a, b, i;
	int * result;
    scanf("%d", &T);
    result = malloc(sizeof(int)*T);
    
	for(i=0; i<T; i++)
	{scanf("%d %d", &a, &b);
	result[i]=a+b;}
	
	for (i=0; i<T; i++)
    printf("%d\n",result[i]);
}