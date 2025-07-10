#include <stdio.h>

main() 
{
    int num = 10;      // Original variable
    int *ptr;          // Declare a pointer to int

    ptr = &num;        // Pointer stores the address of num

    printf("Before modification:\n");
    printf("Value of num = %d\n", num);
    printf("Address of num = %p\n", &num);
    printf("Value of ptr = %p\n", ptr);
    printf("Value pointed by ptr = %d\n", *ptr);

    // Modify the value of num using the pointer
    *ptr = 25;

    printf("\nAfter modification through pointer:\n");
    printf("Value of num = %d\n", num);
    printf("Value pointed by ptr = %d\n", *ptr);
}
