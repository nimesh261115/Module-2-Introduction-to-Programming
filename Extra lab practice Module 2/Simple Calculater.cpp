#include<stdio.h>
main()
{
	int a , b;
	while(1)
	{
	printf("\nEnter a First number : ");
	scanf("%d",&a);
	printf("\nEnnter a Second number :");
	scanf("%d",&b);
	
	printf("press 1 for addition ");
	printf("\npress 2 for Substraction ");
	printf("\npress 3 for Multiply ");
	printf("\npress 4 for Division ");
	
	int ch;
	printf("\nEnter a Operator : ");
	scanf("%d",&ch);
	
	if (ch==1)
	{
		printf("\nAddition is : %d",a+b);
	}
	else if (ch==2)
	{
		printf("\nSubstraction is : %d",a-b);
	}
	else if (ch==3)
	{
		printf("\nMultiplication is  : %d",a*b);
	}
	else if (ch==4)
	{
		printf("\nDivision is : %d",a/b);
	}
	else
	{
		printf("\nThank you!!");
		break;
	}
    }
}
