#include <stdio.h>

int main() {
    int n, i;
    int fib[100]; // Array to store Fibonacci numbers

    // Get the number of terms from the user
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Calculate the Fibonacci numbers and store them in the array
    fib[0] = 0;
    fib[1] = 1;
    for (i = 2; i < n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    // Print the Fibonacci numbers
    printf("The first %d Fibonacci numbers are:\n", n);
    for (i = 0; i < n; i++) {
        printf("%d ", fib[i]);
    }

    return 0;
}
