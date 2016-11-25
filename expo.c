#include<stdio.h>
int main()
{
int base,expo,num;
long long int res=1;

printf("enter base and exponent number");
scanf("%d %d",&base,&expo);
num=expo;
while(expo!=0)
{
res*=base;
expo--;
}
printf("%d power is %d is:%d",base,num,res);
}
