#include<stdio.h>
main()
{
	int a,b,Logic;
	char Input;
	printf("Enter two Numbers which you want to Swap: \n");
	scanf("%d%d",&a,&b);
	printf("The Two Numbers which you Selected are A=%d and B=%d\n",a,b);
	printf("Enter 1. If you want to Swap the Numbers Using Temporary Variable.\n");
	printf("Enter 2. If you want to Swap the Numbers Without Using Temporary Variable.\n");
	scanf("%d",&Logic);
		switch(Logic)
		{
			case 1:
		    	printf("Swapping Using Temporary Variable\n");
				int temp;
				temp=a;
				a=b;
				b=temp; 
				printf("After Swapping, the two Numbers are A=%d and B=%d",a,b);
				break;
			case 2:
	    	 	printf("Without Using Temporary Variable\n");
				a=a+b;
				b=a-b;
				a=a-b;
				printf("After Swapping, the two Numbers are A=%d and B=%d",a,b);
				break;
			default:
				printf("Wrong Input");	
				break;
		}
}
