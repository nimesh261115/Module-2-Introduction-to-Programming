#include<stdio.h>
main()
{
	int n,i,start,end;
	printf("Enter a Number :");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		printf("\n%d * %d = %d",n,i,n*i);
	}
	printf("\n************* User start and end Multipliction******************\n");
	printf("Enter a Number : ");
	scanf("%d",&n);
	
	printf("Enter a Start : ");
	scanf("%d",&start);
	
	printf("Enter a End : ");
	scanf("%d",&end);
	
	for(i=start;i<=end;i++)
	{
		printf("\n%d * %d = %d",n,i,n*i);
	}
}

