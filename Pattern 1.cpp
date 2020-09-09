#include<stdio.h>
main()
{
	int i,j,Rows;
	printf("Enter the Number of Rows you want in your Pattern: \n");
	scanf("%d",&Rows);
	printf("!!Here is Your Beautiful Pattern!!\a\n");
	for(i=0;i<Rows;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("01");
		}
		printf("\n");
	}
}
