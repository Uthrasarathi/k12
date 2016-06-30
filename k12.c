#include<stdio.h>
void main()
{
char str[20],duplicate[20];
clrscr();
printf("Enter the string:\n");
scanf("%d",&str);
strcpy(duplicate,str);
strrev(str);
printf("original string :%s\n",duplicate);
printf("reversed string:%s\n",str);
if(strcmp(str,duplicate)==0)
{
printf("palindrome\n");
}
else
{
printf("not");
}
getch();
}
