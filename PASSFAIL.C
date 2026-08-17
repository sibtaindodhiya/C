#include<stdio.h>
#include<conio.h>
main()
{
	int maths,c,cf,html;
	clrscr();
	printf("\nenter the marks of maths=");
	scanf("%d",&maths);

	printf("\nenter the marks of c=");
	scanf("%d",&c);

	printf("\nenter the marks of cf=");
	scanf("%d",&cf);

	printf("\nenter the marks of html=");
	scanf("%d",&html);

	if(maths && cf && c && html<=40)
	{
		printf("fail");
	}
	else
	{
		printf("pass");
	}
	getch();
	return 0;
}