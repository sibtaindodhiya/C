#include<stdio.h>
#include<conio.h>

main()
{
	float meter,foot,inch,centimeter;
	clrscr();
	printf("enter lengt in meters=");
	scanf("%f",&meter);

	foot=meter*3.28084;
	centimeter=meter*100;
	inch=meter*39.3701;

	printf("centimeter=%.2f cm\n",centimeter);
	printf("foot=%.2f ft\n",foot);
	printf("inch=%.2f in\n",inch);
	getch();
	return 0;

}