#include<stdio.h>
void main()
{ int n;
printf("Enter a number");
scanf("%d",&n);
if(n>0)
{
printf("positive number");
}
else if(n<0)
{
printf("negative number");
}
else
{
printf("equals to zero");
}
}
