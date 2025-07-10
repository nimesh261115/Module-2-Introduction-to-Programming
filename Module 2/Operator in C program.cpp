#include <stdio.h>

main() 
{
    int a, b;

    printf("Enter first integer: ");
    scanf("%d", &a);
    printf("Enter second integer: ");
    scanf("%d", &b);

    // Arithmetic Operations
    printf("\n--- Arithmetic Operations ---\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    if (b != 0) 
	{
        printf("a / b = %d\n", a / b);
        printf("a %% b = %d\n", a % b);  // %% for printing %
    } 
	else 
	{
        printf("Division and modulus by zero not allowed.\n");
    }

    // Relational Operations
    printf("\n--- Relational Operations ---\n");
    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
    printf("a > b  : %d\n", a > b);
    printf("a < b  : %d\n", a < b);
    printf("a >= b : %d\n", a >= b);
    printf("a <= b : %d\n", a <= b);

    // Logical Operations
    printf("\n--- Logical Operations ---\n");
    printf("a && b : %d\n", a && b);  // True if both non-zero
    printf("a || b : %d\n", a || b);  // True if any is non-zero
    printf("!a     : %d\n", !a);      // True if a is zero

}
