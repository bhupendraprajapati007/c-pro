#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>

void printHeart()
{
	double x, y, size=10;
    //printf("\nHow Big is Your Heart? (Enter <20):");
    //scanf("%lf",&size);
    for (x=0; x<size; x++)
    {
        for (y=0; y<=4*size; y++)
        {
            double dist1 = sqrt( pow(x-size,2) + pow(y-size,2) );
            double dist2 = sqrt( pow(x-size,2) + pow(y-3*size,2) );
            if (dist1 < size + 0.5 || dist2 < size + 0.5 )
                 printf("M"); //For 'a'
            else
                 printf(" ");
        }
        printf("\n");
    }
    for (x = 1; x <= 2*size; x++)
    {
        for (y=0; y<x; y++)
        printf(" ");
        for (y=0; y<4*size + 1 - 2*x; y++)
            printf("B"); //for 'V'
        printf("\n");
    }
}
int tmp=0,l;

int main()
{
	system("clear");
	printf("pyaar ko jab pyaar hua.\nto pyaar ne pyaar se pucha ke.\npyaar kaise hota hai.\nto pyaar ne pyaar se kaha ki .\njo is pyaar ko pyaar se phadh raha hai..... \npyaar uske jaisa hota hai.....\n");
	system("sleep 20");
	
	char arr[] = { "I Love You Monika"};
	int len = strlen(arr);
	system("clear");
	for(tmp =0 ; tmp<len ; tmp++ )
	{
		fprintf(stderr,"%c", arr[tmp]);
		if(arr[tmp]!=' ')
		{
			system("sleep 0.3");
			//for(l=0;l<400000;l++);
			
		}
	}
	printf("\n");
	system("sleep 2;clear;sleep 2");
	printf("pyaar ko jab pyaar hua.\nto pyaar ne pyaar se pucha ke.\npyaar kaise hota hai.\nto pyaar ne pyaar se kaha ki .\njo is pyaar ko pyaar se phadh raha hai..... \npyaar uske jaisa hota hai.....\n\n\n\n");
	printf("%s\n",arr);
	system("sleep 5");
	printHeart();
	
}
