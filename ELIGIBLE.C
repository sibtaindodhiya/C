#include<stdio.h>
#include<conio.h>
main()
{
	int age;
	clrscr();
		printf("\nenter age=");
		scanf("%d",&age);

		if(age>=18)
		{
			printf("\neligible");
		}
		else
		{
			printf("\nnot eligible");
		}

	getch();
	return 0;
}
