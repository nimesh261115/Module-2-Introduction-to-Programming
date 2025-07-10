#include <stdio.h>

// Global counters to compare efficiency
int recursiveCalls = 0, iterativeSteps = 0;

// Recursive function
int fibonacci_recursive(int n) {
    recursiveCalls++;
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

// Iterative function
int fibonacci_iterative(int n) {
    int a = 0, b = 1, c, i;

    if (n == 0) return a;
    if (n == 1) return b;

    for (i = 2; i <= n; i++) {
        iterativeSteps++;
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n, result_rec, result_itr;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    // Recursive method
    result_rec = fibonacci_recursive(n);
    printf("\nRecursive: %dth Fibonacci number = %d\n", n, result_rec);
    printf("Recursive calls made: %d\n", recursiveCalls);

    // Iterative method
    result_itr = fibonacci_iterative(n);
    printf("\nIterative: %dth Fibonacci number = %d\n", n, result_itr);
    printf("Iterative steps taken: %d\n", iterativeSteps);

    return 0;
}

