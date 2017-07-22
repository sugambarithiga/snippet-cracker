#include<stdio.h>
int main()
{
char c;
printf("enter the char");
scanf("%c",&c);
int isLowercaseVowel,isUppercaseVowel;
isLowercaseVowel=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
isUppercaseVowel=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
if(isLowercaseVowel||isUppercaseVowel)
printf("the char is vowel",c);
else
printf("the num is consonent",c);
}
