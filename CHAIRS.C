#include<stdio.h>
#include<conio.h>

main()
{
	int x,y;
	float z;
	clrscr();
	printf("enter the total cost of chairs=");
	scanf("%d",&x);

	printf("enter the quantity of chairs=");
	scanf("%d",&y);

	z=(float)x/y;
	printf("/n/teach chair numbers=%f",z);
	getch();
	return 0;

}