#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
long int sum(long int n);
int id(char *c);
int main()
{	

	while(1)
	{	long int no;
		char *num;
		printf("enter  the numer\n");
		scanf("%s",num);
		
		
		
		if(id(num))
			 printf("\n Please enter the integer only!\n");
		/*else if (num==0)
			return 0;			
			//break;
		else if(num=="%c")
			printf("hello");*/

		else
		{
 			no = atoi(num);
			printf("sum of %ld is %ld\n",no, sum(no));
		}
	/*while(1)
	{
		int nu;
		printf("enter  the numer\n");
		scanf("%d",&nu);
		if(nu<0)
			printf("pls enter positive no\n");
		//else if (num==0)
		//	return 0;
		else      
			printf("sum of %d is %d\n",nu, sum(nu));
	}*/
//	return 0;
}
}

int id(char *c)
{
                int i=0;
                 for(i=0;i<strlen(c);i++)
	           if(!(isdigit(c[i])))
	            {
			 return 1;
                    }
                 return 0;
}

long int sum(long int n)
{
	if (n==0)
	return 0;
	return n+sum(n-1);
}
