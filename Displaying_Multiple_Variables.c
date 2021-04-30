#include<stdio.h>
int main()
{
int num;
float real;
char ch;
printf("Enter Integer:");
scanf("%d",&num);
printf("Enter Floating Number:");
scanf("%f",&real);
printf("Enter Character");
scanf(" %c",&ch);
printf("%d %f %c",num,real,ch);
return 0;
}
