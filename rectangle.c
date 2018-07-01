/* This program prints the numbers (from 1 to user-specified limit) and asterisks in a triangle pattren to form rectange.
if user enters 6, program prints the rectangle as 

1*****
12****
123***
1234**
12345*
123456

*/

#include<stdio.h>

int main(void){
	
	int limit,num,star;
	
	printf("Enter any number in between 1 to 9 : \n");
	scanf("%d",&limit);
	
	for(num=1;num<=limit;num++){
			for(star=1;star<=limit;star++)
			if(num>=star)
				printf("%d",star);
			else
				printf("*");
			printf("\n");
	
	}
	
	
	return main();
}
