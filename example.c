#include<stdio.h>
void main()
{
	int y=0;
	if (1|(y=1))
		printf("y is %d\n,y");
	else
		printf("%d\n",y);
}
