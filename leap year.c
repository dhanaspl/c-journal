// program to find a leap year
// Written by Bh.D.Darbar

#include<stdio.h>
main()
{
	int i;
	printf("enter the year :");
	scanf("%d",&i);
	if ((i%4)==0)
	{
		printf("year %d is a leap number",i);		
	}
	else
	{
		printf("year %d is NOT a leap year", i);
	}
}
