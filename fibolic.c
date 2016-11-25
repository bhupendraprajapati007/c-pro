#include<stdio.h>
void main()
{
	int a=0;
	int b=1;
	int c,n;
	int i=0;
	printf("enter the number of times");
	scanf("%d",&n);
	while(i<=n)
	{
		c=a+b;
		printf("%d\t",c);
		a=b;
		b=c;
		i++;
	}
}
