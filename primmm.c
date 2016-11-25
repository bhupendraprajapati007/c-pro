#include<stdio.h>

void main()
{
	:xlong x = 100000667;
	long y = x/2;
	while ( y > 1){
		if(x % y == 0){
			printf("not a prime");
			exit(0);
		}
		y--;
	}
	printf("PrimeNumber");
}
