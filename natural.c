#include<stdio.h>
int main()
{
int i,num,sum=0;
printf("enter the num");
scanf("%d",&num);
for(i=0;i<=num;i++)
{
sum=sum+i;
}
printf ("Sum of first %d natural numbers = %d\n", num, sum);
return 0;
}

