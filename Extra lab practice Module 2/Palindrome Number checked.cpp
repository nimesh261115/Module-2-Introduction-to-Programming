#include <stdio.h>

// Function to check if a number is a palindrome
int isPalindrome(int n) 
{
	int digit;
    int o = n;
    int r = 0;

    while (n != 0) 
	{
        digit = n % 10;
        r = r * 10 + digit;
        n /= 10;
    }

    return (o == r);
}

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (isPalindrome(num)) 
	{
        printf("%d is a palindrome number.\n", num);
    } 
	else 
	{
        printf("%d is not a palindrome number.\n", num);
    }

    return 0;
}
