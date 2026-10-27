#include<stdio.h>
int main()
{
	int grade = 96;
	if(grade >= 95 && grade <= 100)
	{
		printf("prize is bicycle");
	}
	else if (grade >= 90 && grade <= 94)
	{
		printf("prize is ticket to playground");
	}
	else if (grade >= 80 && grade <= 89)
	{
		printf("prize is a transformer toy");
	}
	else if (grade < 80)
	{
		printf("prize is a book");
	}
	return 0;




}