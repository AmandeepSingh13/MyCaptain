#include<stdio.h>
int main()
{
	unsigned int Marks;
	printf("Enter Your Marks in order to know your grade(Max=100): ");
	scanf("%d",&Marks);
		if(Marks>100)
		{
			printf("\"Marks Exceed The Max Limit\"");
		}
		else if(Marks>=85)
		{
			printf("Congratulations, you have Scored - \"Grade-A\"");
		}
		else if(Marks>=70)
		{
			printf("Congratulations, you have Scored - \"Grade-B\"\n");
			printf("Tried Hard, Better Luck Next Time");
		}
		else if(Marks>=55)
		{
			printf("You have Scored - \"Grade-C\"\n");
			printf("Put in more Effort");
		}
		else if(Marks>=40)
		{
			printf("You have Scored - \"Grade-D\"\n");
			printf("Didn't Studied!!!");
		}
		else
		{
			printf("You have Scored - \"Grade-D\"\n");
			printf("\"Fail, Work Hard\"");
		}
		printf("\n");
}
