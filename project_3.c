/*
This program tests a user-entered character and displays its classification according to the ASCII classifications.
This program is starting at the top of the classification tree and display all classifications that the character belongs to.

Written by: Bhetanabhotla Dhanadeswara Darbar,
Date: 28-JUNE-2018.
*/

main(void){
char input;
printf("CLASSIFICATIONS of the CHARACTER TYPE according to the ASCII CLASSIFICATION\n");
printf("---------------------------------------------------------------------------\n\n");
printf("Enter a character: \n");
scanf("%c",&input);

if(iscntrl(input)){
	printf("It is a control character.");
}else{
	printf("It is a Printable character");
	if(isspace(input)){
		printf("and Whitespace character.");
		
	}else{
		printf(", graphical character");
		if(ispunct(input)){
			printf(" and Punctuation i.e., Not Alphanumeric character.");
		}else{
			printf(", Alphanumeric character");
			if(isdigit(input)){
				printf(" and Digit.");
			}else{
				printf(" and alphabetic character.");
			}
		}
	}
}
}
