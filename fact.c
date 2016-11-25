#include<stdio.h>
void main()
{
int n,fact=1,num;
printf("enter a   value\n");
scanf("%d",&n);
num=n;

while(n>0)
	{
	fact*=n;
	n--;
	}
	printf("factorial of %d is %d\n",num,fact);

}
