#include <stdio.h>

int main() {
    int a, b, temp;
    
    printf("Enter value of a: ");
    scanf("%d", &a);
    
    printf("Enter value of b: ");
    scanf("%d", &b);
    
    printf("Before swapping, a = %d and b = %d\n", a, b);
    
    // swap logic
    temp = a;
    a = b;
    b = temp;
    
    printf("After swapping, a = %d and b = %d\n", a, b);
    
    return 0;
}
