/*The distance between two cities (in km.) is input through the keyboard. 
Write a program to convert and print this distance in meters, feet, inches and centimeters.*/
// written by: Bh.D.Darbar


main()
{
	float km,m,fe,in,cm;//km= kilo meter, m= meter, fe= feet, in= inch,cm= centimeter
	printf("enter the distance between the cities:\n");
	scanf("%f",&km);
	m=km*1000;
	fe=km*3280.84;
	in=39370.08*km;
	cm=km*100000;
	printf("%f km in meters is %f m,\n%f km in feets is %f feets,\n%f km in inches is %f inches,\n%f km in centimeters is %f cm",km,m,km,fe,km,in,km,cm);
}
