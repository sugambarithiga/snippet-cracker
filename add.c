#include<stdio.h>
int main()
{
int first,second,*p,*q,sum;
printf("enter the two numbers to add\n");
scanf("%d %d",&first,&second);
p=&first;
q=&second;
sum=*p+*q;
printf("sum of entered num=%d",sum);
return 0;
}
