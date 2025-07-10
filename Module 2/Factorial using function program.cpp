#include<stdio.h>
 
Factorial() //Function defination
 {
 	int n,i,fac=1;
 	printf("Enter a Number :");
 	scanf("%d",&n);
 	
 	for(i=1;i<=n;i++)
 	{
 		fac*=i;
 		
	}
	printf("Factorial is : %d\n",fac);
 }
 main()
	 {
 	Factorial(); //Function Call
 }
