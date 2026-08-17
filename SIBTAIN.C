#include<stdio.h>
#include<conio.h>
main()
{
	int mark;
	clrscr();
	printf("\n\tEnter the mark ");
	scanf("%d",&mark);
	if(mark>=90)
	{
	     printf("\n\tCongra... you are pass");
	     printf("\n\tYour Performed Distinction");
	     printf("\n\tYou Got A+ Grade");
	}
	else if(mark>=80)
	{
	     printf("\n\tCongra... you are pass");
	     printf("\n\tYour Performed Excelent");
	     printf("\n\tYou Got A Grade");
	}
	else if(mark>=70)
	{
	     printf("\n\tCongra... you are pass");
	     printf("\n\tYour Performed Very Good ");
	     printf("\n\tYou Got B Grade");
	}
	else if(mark>=35)
	{
	     printf("\n\tCongra... you are pass");
	     printf("\n\tYour Performed Good");
	     printf("\n\tYou Got C Grade");
	}
	else
	{
	     printf("\n\t you are Fail");
	     printf("\n\t You improve study skill");
	     printf("\n\tYou Got D Grade");
	}


		printf("\n\tTHANK YOU");
	getch();
	return 0;


}