#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter a Number : ");
	scanf("%d",&a);
	printf("Enter a Number : ");
	scanf("%d",&b);
	printf("Enter a Number : ");
	scanf("%d",&c);
	printf("\n*********For Largest Number********\n ");
	if (a>=b && a>=c)
	{
		printf("largest Number is : %d\n",a);
	}
	else if (b>=a && b>=c)
	{
		printf("largest Number is : %d\n",b);
	}
	else
	{
		printf("largest Number is : %d\n",c);
	}
	printf("\n*********For Smallest Number********\n ");
	if (a<=b && a<=c)
	{
		printf("Smallest Number is : %d\n",a);
	}
	else if (b<=a && b<=c)
	{
		printf("Smallest Number is : %d\n",b);
	}
	else
	{
		printf("Smallest Number is : %d\n",c);
	}
}
