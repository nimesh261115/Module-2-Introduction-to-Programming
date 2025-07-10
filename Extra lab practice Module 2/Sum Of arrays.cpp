#include<stdio.h>
main()
{
	int a[10];
	int i , avg ,sum = 0;
	for(i=0;i<5;i++)
	{
		printf("Enter a Number : ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\nEntered Number is : %d",a[i]);
	}
	for(i=0;i<5;i++)
	{
		sum = sum + a[i];
	}
	printf("\nSum Of Array is : %d",sum);
	printf("\nAverage is : %d",sum/5);
}
