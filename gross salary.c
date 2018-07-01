/* If basic salary is input through the keyboard. 
Dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary. 
Write a program to calculate gross salary. */
// Written by: bh.d.darbar



main()
{
	float bs;// bs= basic salary
	float da=40.00;//da= dearness allowance
	float ra=20.00;//ra= rent allowance
	float gs;//gs= gross salary
	printf("enter your basic salary");
	scanf("%f",&bs);
	gs= bs-((da*bs/100)+(ra*bs/100));
	printf("the gross salary is %f",gs);
}
