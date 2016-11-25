#include<stdio.h>
void main()
{
int a,b;
char o;
printf("enter the operator\n");
scanf("%c",&o);
printf("enter  two values\n");
scanf("%d %d",&a,&b);
switch(o)
{
case'+':
printf("%d+%d=%d\n\n",a,b,a+b);
break;
case'-':
printf("%d-%d=%d\n\n",a,b,a-b);
break;
case'*':
printf("%d*%d=%d\n\n",a,b,a*b);
break;
case'/':
printf("%d/%d=%d\n\n",a,b,a/b);
break;
default:
printf("error");
}
return 0;
}                            
