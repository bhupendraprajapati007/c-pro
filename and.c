
#include<stdio.h>
void displayBits(int x);
//void main()
{
	int a,b,c;
	printf("enter the A & B value\n");
	scanf("%d %d",&a,&b);
	c=a|b;
	printf("%d\n",c);
	displayBits(c);
}
void displayBits(int x)
{
	int i,mask;
	for(i=31;i>=0;i--)
	{
		mask=1<<i;
		putchar((x&mask)?'1':'0');
		if(i%8==0)
		printf(" ");
	}
}
