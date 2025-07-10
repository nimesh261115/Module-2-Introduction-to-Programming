#include<stdio.h>
main()
{
	int a[3][3] ,b[3][3];
	int i , j ;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
     	{
    	printf("Enter A Matrix Number  : ");
	    scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    	printf("%d\t",a[i][j]);
	    }
	    printf("\n");
    }
    printf("\n************* Part B ************\n");
    for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
     	{
    	printf("Enter A Matrix Number  : ");
	    scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    	printf("%d\t",b[i][j]);
	    }
	    printf("\n");
    }
    printf("\n***************Addition*************\n");
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    	printf("%d\t",a[i][j]+b[i][j]);
	    }
	    printf("\n");
    }
}
