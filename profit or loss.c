/* Program to find Profit or Loss */
// Written by : Bh.D.Darbar


#include<stdio.h>
main()
{
	int cp,sp,pro;
	printf("enter the cp and sp of the item :");
	scanf("%d%d",&cp,&sp);
	if (cp>sp)
	{
		pro=cp-sp;
		printf("user made loss of %d",pro);		
	}
	else
	{
		pro=sp-cp;
		printf("user made profit of %d ", pro);
	}
}
