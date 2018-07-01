/* 

Program to create a customer's bill for a company.
The company sells only five different products : TV, VCR, Remote Controller, CD Player and Tape Recorder.
The unit prices are :-  TV : $400.00, VCR : $220.00, Remote Controller : $35.20, CD Player : $300.00 and Tape Recorder : $150.00 respectively.
The program must read the quantity of each piece of equipment purchased from the keyboard.
It then calculates the cost of each item, the subtotal and the total cost after an 8.25% sales tax.

Written by : Bhetanabhotla Dhanadeswara Darbar.
Date : 26-JUNE-2018

*/

// Header files invoking
#include<stdio.h>
#include<conio.h>
#include<math.h>
//Header files invoking completed

// Main function starts

int main(void)
{
	// tv_quan: TV Quantity, vcr_quan: VCR Quantity, rem_cont_quan: Remote Controller Quantity, cd_play_quan: CD Player Quantity and tape_rec_quan: Tape Recorder Quantity
	int tv_quan,vcr_quan,rem_cont_quan,cd_play_quan,tape_rec_quan;
	
	// tv_up: TV Unit price, vcr_up: VCR Unit price, rem_cont_up: Remote Controller Unit price, cd_play_up: CD Player Unit price and tape_rec_up: Tape Recorder Unit price
	float tv_up=400.00;
	float vcr_up=220.00;
	float rem_cont_up=35.20;
	float cd_play_up=300.00;
	float tape_rec_up=150.00;
	float sales_tax_rate=8.25;
	
	// tv_tot_pri: TVs total price, vcr_tot_pri: VCRs total price, rem_cont_tot_pri: Remote Controllers total price, cd_play_tot_pri: CD Players total price and tape_rec_tot_pri: Tape Recorder total price
	float tv_tot_pri;
	float vcr_tot_pri;
	float rem_cont_tot_pri;
	float cd_play_tot_pri;
	float tape_rec_tot_pri;
	
	// sub_tot : Sub total, sales_tax_amt : Sales tax amount and tot_pri : Total price.
	double sub_tot;double tot_pri;double sales_tax_amt;char loop;
	
	// Statement printf("How Many TVs Were Sold?\n"; prints "How Many TVs Were Sold?" on screen and \n is used for getting next line.
		printf("How Many TVs Were Sold?\n");
	
	// scanf("%d",&tv_quan); statement take the input value and store that value in tv_quan variable
	scanf("%d",&tv_quan);
	printf("How Many VCRs Were Sold?\n");
	scanf("%d",&vcr_quan);
	printf("How Many Remote Controllers Were Sold?\n");
	scanf("%d",&rem_cont_quan);
	printf("How Many CDs Were Sold?\n");
	scanf("%d",&cd_play_quan);
	printf("How Many Tape Recorders Were Sold?\n");
	scanf("%d",&tape_rec_quan);
	
	tv_tot_pri = tv_quan * tv_up;
	vcr_tot_pri = vcr_quan * vcr_up;
	rem_cont_tot_pri = rem_cont_quan * rem_cont_up;
	cd_play_tot_pri = cd_play_quan * cd_play_up;
	tape_rec_tot_pri = tape_rec_quan * tape_rec_up;
	
	sub_tot = tv_tot_pri + vcr_tot_pri + rem_cont_tot_pri + cd_play_tot_pri + tape_rec_tot_pri;
	
	sales_tax_amt = (sales_tax_rate*sub_tot)/100;
	
	tot_pri = sub_tot + sales_tax_amt ;
	
	printf("QTY\tDESCRIPTION\tUNIT PRICE\tTOTAL PRICE\n");
	printf("---\t----------\t----------\t---------\n");
	printf("%d\tTV\t\t%8.2f\t%8.2f\n",tv_quan,tv_up,tv_tot_pri);
	printf("%d\tVCR\t\t%8.2f\t%8.2f\n",vcr_quan,vcr_up,vcr_tot_pri);
	printf("%d\tREMOTE CTRLR\t%8.2f\t%8.2f\n",rem_cont_quan,rem_cont_up,rem_cont_tot_pri);
	printf("%d\tCD PLAYER\t%8.2f\t%8.2f\n",cd_play_quan,cd_play_up,cd_play_tot_pri);
	printf("%d\tTAPE RECORDER\t%8.2f\t%8.2f\n",tape_rec_quan,tape_rec_up,tape_rec_tot_pri);
	printf("\t\t\t\t----------------\n");
	printf("\t\t\tSUBTOTAL\t%8.2f\n",sub_tot);
	printf("\t\t\tTAX\t\t%8.2f\n",sales_tax_amt);
	printf("\t\t\tTOTAL\t\t%8.2f\n\n",tot_pri);
	return main();
	
}
