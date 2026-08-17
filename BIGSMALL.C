#include<stdio.h>
#include<conio.h>
main()
{
	int x,y;
	clrscr();
	printf("\nenter the value of x=");
	scanf("%d",&x);

	printf("\nenter the value of y=");
	scanf("%d",&y);

	if(x>y)
	{
		printf("\nx is big");
	}
	else
	{
		printf("\ny is big");
	}

	getch();
	return 0;
}