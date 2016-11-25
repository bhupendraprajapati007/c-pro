#include<stdio.h>
int fact(int n);
void main()
{
	int num;
	printf("enter the number\n");
	scanf("%d",&num);
	printf("factorial of %d is %d",num, fact(num));
}
int fact(int n)
{
	if(n==0)
	return 1;
	return n*fact(n-1);
}
