#include<stdio.h>
void main()
{
	int a=8,b;
	b=(--a - a-- - ++a);
	printf("%d\n",b);
}
