#include<stdio.h>
void main()
{
	long a,b,i=100000667;
	printf("enter the range of number\n");
//	scanf("%d %d",&a,&b);
//	for(i=a;i<=b;i++)
//	{	
		if(i==2||i==3||i==5||i==7)
			printf("%ld is a prime number\n",i);	
		else if(i%2==0||i%3==0||i%5==0||i%7==0)	
			printf("%ld is  not  a prime number\n",i);
                else
			printf("%ld is a prime number\n",i);
//	}
}
