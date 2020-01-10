/*
 ============================================================================
 Name        : even&oddprog.c
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
 int array[100], i, num;
 printf("Enter the size of an array \n");
scanf("%d", &num);
printf("Enter the elements of the array \n");
for (i = 0; i < num; i++)
{
scanf("%d", &array[i]);
}
printf("Even numbers in the array are - ");
for (i = 0; i < num; i++)
{
if (array[i] % 2 == 0)
{
printf("%d \t", array[i]);
}
}
printf("\n Odd numbers in the array are -");
for (i = 0; i < num; i++)
{
if (array[i] % 2 != 0)
{
printf("%d \t", array[i]);
}
}
puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
return EXIT_SUCCESS;
}
