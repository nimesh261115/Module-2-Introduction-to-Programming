#include <stdio.h>
main() 
{
    int num, month;

    // Even or Odd check using if-else ---
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0) 
	{
        printf("The number %d is Even.\n", num);
    } else
	{
        printf("The number %d is Odd.\n", num);
    }

    // Display month name using switch
    printf("\nEnter month number (1-12): ");
    scanf("%d", &month);

    switch (month) 
	{
        case 1:
            printf("Month: January\n");
            break;
        case 2:
            printf("Month: February\n");
            break;
        case 3:
            printf("Month: March\n");
            break;
        case 4:
            printf("Month: April\n");
            break;
        case 5:
            printf("Month: May\n");
            break;
        case 6:
            printf("Month: June\n");
            break;
        case 7:
            printf("Month: July\n");
            break;
        case 8:
            printf("Month: August\n");
            break;
        case 9:
            printf("Month: September\n");
            break;
        case 10:
            printf("Month: October\n");
            break;
        case 11:
            printf("Month: November\n");
            break;
        case 12:
            printf("Month: December\n");
            break;
        default:
            printf("Invalid month number. Please enter 1–12.\n");
    }
}

