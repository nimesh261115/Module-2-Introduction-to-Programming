#include<stdio.h>
main()
{
	int marks ;
	printf("Enter a marks : ");
	scanf("%d",&marks);
	
	if(marks>90)
	{
		printf("Congratulations You Have (Grade A)");
	}
	else if(marks>75 && marks<=90)
	{
		printf("You have a good grade (Grade B)");
	}
	else if(marks>50 && marks<=75)
	{
		printf("Need to improvment (Grade C)");
	}
	else if (marks>34 && marks<=50)
	{
		printf("Poor perfomance (Grade D)");
	}
	else 
	{
		printf("You are failed ");
	}
}
