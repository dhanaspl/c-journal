/* Question from "Let Us C by Yashavant P. Kanetkar" text book:
An Insurance company follows following rules to calculate premium.
(1) If a person’s health is excellent and the person is between 25 and 35 years of age and lives in a city and is a male then the premium is Rs. 4 per thousand and his policy amount cannot exceed Rs. 2 lakhs.
(2) If a person satisfies all the above conditions except that the sex is female then the premium is Rs. 3 per thousand and her policy amount cannot exceed Rs. 1 lakh.
(3) If a person’s health is poor and the person is between 25 and 35 years of age and lives in a village and is a male then the premium is Rs. 6 per thousand and his policy cannot exceed Rs. 10,000.
(4) In all other cases the person is not insured.
Write a program to output whether the person should be insured or not, his/her premium rate and maximum amount for which he/she can be insured.
*/

#include<stdio.h>
int main()
{
char per_hel;
char liv_are;
char sex;
int age,pre,pol_amnt;
printf("health (E-Excellent or P-poor) :");
scanf("%c",&per_hel);
printf("\nliving in (C-city or V-village):");
scanf(" %c",&liv_are);
printf("\nsex (M-male or F-female):");
scanf(" %c",&sex);
printf("\nAge (in years):");
scanf("%d",&age);
printf("\n enter the policy amount:");
scanf("%d",&pol_amnt);
pre=pol_amnt/1000;
if((per_hel=='E'||per_hel=='e')&&age>=25&&age<=35&&(liv_are=='C'||liv_are=='c'))
{
	if((sex=='m'||sex=='M')&&pol_amnt<=200000)
	{
		printf("His premium rate is RS 4.00 per thousand.");
		printf("\nThe maximun amount for which he insured is (2,00,000) 2 lakhs only.");
		printf("\nyou entered the policy amount of %d and the premium amount you can get is %d",pol_amnt,4*pre);
	}
	else if((sex=='m'||sex=='M')&&pol_amnt>=200000)
	{
		printf("\n person is not insured");
		printf("\nHis premium rate is RS 4.00 per thousand.");
		printf("\nThe maximun amount for which he insured is (2,00,000) 2 lakhs only.");
	}
	else if((sex=='f'||sex=='F')&&pol_amnt<=100000)
	{
		printf("Her premium rate is RS 3.00 per thousand.");
		printf("\nThe maximun amount for which she insured is (1,00,000) 1 lakh only.");
		printf("\nyou entered the policy amount of %d and the premium amount you can get is %d",pol_amnt,3*pre);	
	}
	else
	{
		printf("\n person is not insured");
		printf("\nHer premium rate is RS 3.00 per thousand.");
		printf("\nThe maximun amount for which she insured is (1,00,000) 1 lakh only.");
	}
}
else if((per_hel=='p'||per_hel=='P')&&age>=25&&age<=35&&(liv_are=='v'||liv_are=='V')&&(sex=='m'||sex=='M'))
{
	if(pol_amnt<=10000)
	{
	printf("His premium rate is RS 6.00 per thousand.");
	printf("\nThe maximun amount for which he insured is (10,000) ten thousand only.");
	printf("\nyou entered the policy amount of %d and the premium amount you can get is %d",pol_amnt,6*pre);
	}
	else if(pol_amnt>=1000)
	{
		printf("\n person is not insured");
		printf("His premium rate is RS 6.00 per thousand.");
		printf("\nThe maximun amount for which he insured is (10,000) ten thousand only.");
	} 
}
else
	printf("the person is not insured");
}
