/*
 ============================================================================
 Name        : newodd.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main(void) {
	int x,y,z,i;
	printf("enter starting number");
	scanf("%d",&x);
	printf("enter ending number");
	scanf("%d",&y);
	printf("enter yoUr choice 1.evn 2.odd");
	scanf("%d",&z);
	if(z==1)
	{
	for(i=x;i<=y;i++)
	{
	if(i%2==0)
	{
	printf("%d",& i);
	}
	}
	}
	else
	{
	for(int i=x;i<=y;i++)
	{
	if(i%2!=0)
	{
	printf("%d",&i);
	}
	}
	}

	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
