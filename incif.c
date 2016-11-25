#include<stdio.h>
int x=1;
int y=1;
main()
{
	if(x++&&++y)
	{
	printf("fffff");
	}
	printf("%d,%d",x,y);
}
