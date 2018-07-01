// If a five-digit number is input through the keyboard, a program to reverse the number and calculate the sum of digits of that number
// Written by Bh.D.Darbar


#include<stdio.h>
main()
{
	int given_num;
	int first_num;
	int second_num;
	int third_num;
	int fourth_num;
	int fifth_num;
	int sum_of_digits;
	
	printf("enter the five - digit number : ");
	scanf("%d",&given_num);
	
	first_num=given_num%10;
	printf("In one's place, number is %d",first_num);
	
	second_num=(given_num%100)/10;
	printf("\nIn ten's place, number is %d",second_num);
	
	third_num=(given_num%1000)/100;
	printf("\nIn 100's place, number is %d",third_num);
	
	fourth_num=(given_num%10000)/1000;
	printf("\nIn 1000's place, number is %d",fourth_num);
	
	fifth_num=(given_num%100000)/10000;
	printf("\nIn 10000's place, number is %d",fifth_num);
	
	sum_of_digits = first_num + second_num + third_num + fourth_num + fifth_num;
	printf("\nSum of the digits is %d",sum_of_digits);
	
	printf("\n the revese order of %d is %d%d%d%d%d",given_num,first_num,second_num,third_num,fourth_num,fifth_num);
}
