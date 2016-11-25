#include<stdio.h>
int fun(){
	printf("true");
	return 1;
}
void main()
{
	if( 0 && fun() )
		printf("hello");
}
