#include<stdio.h>
main()
{
	int a ;
	printf("Enter a Number : ");
	scanf("%d",&a);
	printf("******************For even and Odd Number!!!!!!****************\n");
	
	if (a==0)
	{
		printf("Entered Number is not even or odd : %d ",a);
	}
	else if(a%2==0)
	{
		printf("Entered Number is Even : %d",a);
	}
	else
	{
		printf("Entered Number is Odd : %d ",a);
	}
	
	printf("\n******************For Negative , Positive or Zero****************\n");
	
	if(a<0)
	{
		printf("Entered Number is Negative : %d",a);
	}
	else if(a>0)
	{
		printf("Entered Number is Positive : %d ",a);
	}
	else
	{
		printf("Entered Number is Zero : %d ",a);
	}
	
	printf("\n************multiple of both 3 and 5**************\n");
	
	if(a%3==0 && a%5==0)
	{
		printf("The number is a multiple of both 3 and 5.\n ");
	}
	else
	{
		printf("The number is a Not multiple of both 3 and 5.\n ");
	}
 
}
