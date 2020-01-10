/*
 ============================================================================
 Name        : odd.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main(void)
{
int a,b,d,i;
char e;
printf("enter the staring number");
scanf("%d",&a);
printf("enter the ending number");
scanf("%d",&b);
printf("enter the type of number E/O");
scanf("%s",&e);
if(e=='o')
{
for(i=a;i<=b;i++)
{
d=i%2;
if(d!=0)
	{
	printf("%d",i);
	}

}
}
else{
for(i=a;i<=b;i++)
{
d=i%2;
if(d==0)
	{
	printf("%d",i);
	}

}
}
}

