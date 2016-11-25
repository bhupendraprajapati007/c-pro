#include <stdio.h>
int main()
{
	int a = 8, b;
	b = --a - a-- - ++a;
	printf("%d", a);
	return 0;
}
