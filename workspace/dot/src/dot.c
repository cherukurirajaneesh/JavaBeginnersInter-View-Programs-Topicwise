/*
 ============================================================================
 Name        : dot.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int x,y,z,i;
printf("enter starting number");
scanf("%d",&x);
printf("enter ending number");
scanf("%d",&y);
printf("enter your choice 1.even 2.odd");
scanf("%d",&z);
if(z==1)
{
for(i=x;i<=y;i++)
{
if(i%2==0)
{
printf("%d",i);
}
}
}
else
{
for(int i=x;i<=y;i++)
{
if(i%2!=0)
{
printf("%d",i);
}
}
return;
}
}
