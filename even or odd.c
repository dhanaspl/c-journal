/* Program to find EVEN or ODD numbers */
// written by Bh.D.Darbar


#include<stdio.h>
main()
{
	int i;
	printf("enter the integer :");
	scanf("%d",&i);
	if ((i%2)==0)
	{
		printf("integer %d is a even number",i);		
	}
	else
	{
		printf("Integer %d is a odd number", i);
	}
}
