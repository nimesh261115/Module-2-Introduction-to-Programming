#include<stdio.h>
#include<string.h>
main()
{
	char a[10];
	char b[10];
	printf("Enter a Character a :");
	gets(a);
	printf("Enter a Character b :");
	gets(b);
	
	strcat(a,b);
	{
		printf("Merge strings are : %s",a);
	}	 
	printf("\nLenghth of string is : %d",strlen(a));
	
}
