#include <stdio.h>
main() 
{
    int i;
    printf("Using break (stop when number is 5):\n");
    for (i = 1; i <= 10; i++) 
	{
        if (i == 5) 
		{
            break;  
        }
        printf("%d ", i);
    }

    printf("\n\n");
    printf("Using continue (skip number 3):\n");
    for (i = 1; i <= 10; i++) 
	{
        if (i == 3) 
		{
            continue;  
        }
        printf("%d ", i);
    }

    printf("\n");

}
