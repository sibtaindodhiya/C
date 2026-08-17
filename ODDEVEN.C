#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	clrscr();
	printf("\nenter the value of a=");
	scanf("%d",&a);

	if(a%2==0)
	{
		printf("\nthe number is even");
	}
	else
	{
		printf("\nthe number is odd");
	}

	getch();
	return 0;
}
