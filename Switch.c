#include<stdio.h>
main()
{
	int Random_Number,OnceMore;
	Repeat:
	printf("\"Enter Any Random Number and Wait for the Surprise\"\n");
	scanf("%d",&Random_Number);
	printf("!!!Congratulation!!!\n\\%% You have Won a Free Meal %%\\\n");
	switch(Random_Number)
	{
		case 1:
	    	printf("Food Item - Pizza\nPrice - 239");
     		break;
		case 2:
		    printf("Food Item - Burger\nPrice - 129");
		    break;
		case 3:
			printf("Food Item - Pasta\nPrice - 179");
			break;
		case 4:
			printf("Food Item - French Fries\nPrice - 99");
			break;
		case 5:
			printf("Food Item - Sandwich\nPrice - 149");
			break;
		default:
			printf(" Sorry Invalid Option ");		
	}
	printf("\n");
	printf("Do YOU WANT TO CONTINUE \n");
	printf("Press 1 for Yes and 2 for No \n");
	scanf("%d",&OnceMore);
	if(OnceMore==1)
		goto Repeat;
	else
	{
		printf("Thank You for your Time");
	}
}
