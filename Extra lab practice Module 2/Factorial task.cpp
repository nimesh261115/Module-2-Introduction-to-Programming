#include<stdio.h>
main()
{
	int n;
	int i , fac=1;
	
	printf("Enter a Number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fac=fac*i;
	}
	printf("Factorial Is : %d",fac);
}
