#include<stdio.h>
#include<conio.h>
main()
{
	int x,y,z;
	clrscr();
	printf("\nenter the value of X=");
	scanf("%d",&x);

	printf("\nenter the value of Y=");
	scanf("%d",&y);

	printf("\nenter the value of Z=");
	scanf("%d",&z);

	if(x>y)
	{
		printf("\nX is big");
	}
	else
	{
		if(y>z)
		{
			printf("\nY is big");
		}
		else
		{
			printf("Z is big");
		}
	}
	getch();
	return 0;
}