// program to convert fahrenheit to centigrade
// Written by :  Bh.D.Darbar

#include<stdio.h>
main()
{
	float fahre,centi;
	printf("enter the temp in the city in fahrenheit:\n");
	scanf("%f",&fahre);
	centi=fahre*(-17.22222);
	printf("%f fahrenheit in centigrade is %f c",fahre,centi);
}
