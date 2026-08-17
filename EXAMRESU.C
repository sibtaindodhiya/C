#include<stdio.h>
#include<conio.h>
main()
{
	int c,cf,html,maths,total,result;
	float per;
	clrscr();
	printf("enter marks of c     :");
	scanf("%d",&c);
	printf("enter marks of cf    :");
	scanf("%d",&cf);
	printf("enter marks of html  :");
	scanf("%d",&html);
	printf("enter marks of maths :");
	scanf("%d",&maths);

	total=c+cf+html+maths;
	printf("\ntotal marks :%d",total);

	per=(float)total/4;

	printf("\nper         :%.2f%",per);

	if(per>=80)
	{
		printf("\ngrade       :distiction");
	}

	else if(per>=60)
	{
		printf("\ngrade       :first class");
	}

	else if(per>=50)
	{
		printf("\ngrade       :second class");
	}

	else
	{
		printf("\ngrade       :pass class");
	}

	if(maths<40 || c<40 || cf<40 || html<40)
	{
		printf("\nresult      :fail");
	}
	else
	{
		printf("\nresult      :pass");
	}

	getch();
	return 0;


}
