/*
 ============================================================================
 Name        : ISBNCode.c
 Author      : anuj
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[10],i,sum,j;
	printf("enter the 10 digit ISBN Code");
	gets(arr);
	for(i=1,j=9;i<=10,j<10;i++,j--)
	{
		sum=sum+i*arr[j];
	}
	if(sum/11==0)
	{
		printf("ISBN code is correct");
	}
	else
	{
		printf("it is not a correct code");
	}
	return 0;
}


