#include <stdio.h>

// Function to calculate factorial of a number
int factorial(int num) {
    int fact = 1;
    for(int i=2; i<=num; i++) {
        fact *= i;
    }
    return fact;
}

// Function to check if a number is a strong number
int isStrongNumber(int num) {
    int temp = num, sum = 0, digit;
    while(temp != 0) {
        digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }
    return (sum == num);
}

// Function to print all strong numbers between a given interval
void printStrongNumbers(int lower, int upper) {
    printf("Strong numbers between %d and %d are: ", lower, upper);
    for(int i=lower; i<=upper; i++) {
        if(isStrongNumber(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

// Function to find all strong numbers between 1 to n
void findStrongNumbers(int n) {
    printf("Strong numbers between 1 and %d are: ", n);
    for(int i=1; i<=n; i++) {
        if(isStrongNumber(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int lower, upper, n;
    printf("Input lower limit: ");
    scanf("%d", &lower);
    printf("Input upper limit: ");
    scanf("%d", &upper);
    printStrongNumbers(lower, upper);
    printf("Input value of n: ");
    scanf("%d", &n);
    findStrongNumbers(n);
    return 0;
}
