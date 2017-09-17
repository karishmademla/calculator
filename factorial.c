#include<stdio.h>

void factorial(int a)
{
int f=1,i;
for(i=1;i<=a;i++)
f=f*i;
printf("The factorial is %d\n",f);

}
