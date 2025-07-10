#include<stdio.h>
main()
{
	int n, digit , sum=0;
	printf("Enter a Integer : ");
	scanf("%d",&n);
	
	while(n != 0)
	{
		digit = n % 10;
		n = n/10;
		sum = sum + digit;
	}
	printf(" Sum Of digits of %d \n",sum);
	
}
