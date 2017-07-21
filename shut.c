#include<stdio.h>
#include<stdlib.h>
main()
{
char ch;
printf("do you want to shutdown your system(y/n)\n");
scanf("%c",&ch);
if(ch==y||ch==Y)
system("c:\\WINDOWS\\System32\\shutdown /s");
return 0;
}
