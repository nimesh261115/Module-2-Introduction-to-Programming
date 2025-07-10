#include<stdio.h>
main()
{
	int limit , i , j , prime=0;
	printf("Enter a Limit : ");
	scanf("%d",&limit);
	
	printf("Prime numbers between 1 and %d are:\n", limit);
	for(i=2;i<=limit; i++)
	{
		prime=1;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				prime=0;
				break;
			}
		}
		if (prime)
		{
			printf("%d\t",i);
		}
	}
	printf("\n");
	
	
	
}
