#include<stdio.h>
main()
{
	int a[10];
	int i ,j ;
	int max,min,temp=0;
	for(i=1;i<=10;i++)
	{
		printf("Enter a Number : ");
		scanf("%d",&a[i]);
	}
	for(i=1;i<=10;i++)
	{
		printf("\n Entered number is : %d",a[i]);
	}
	for(i=1;i<=10;i++)
	{
		for(j=i+1;j<=10;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=1;i<=10;i++)
	{
		printf("\nAscending Order : %d",a[i]);
	}
	for(i=1;i<=10;i++)
	{
		if(a[i] > max)
		max =a[i];
		if(min > a[i])
		min = a[i];	
	}
	printf("\nMaximum number is : %d",max);
	printf("\nMinimum Number is : %d",min);
	
}
