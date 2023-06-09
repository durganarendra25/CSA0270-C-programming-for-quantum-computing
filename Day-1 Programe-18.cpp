#include <stdio.h>

// Function to find factorial using recursion
int factorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}

// Main function
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Factorial of negative numbers does not exist.\n");
    }
    else
    {
        printf("Factorial of %d is %d.\n", num, factorial(num));
    }

    return 0;
}
