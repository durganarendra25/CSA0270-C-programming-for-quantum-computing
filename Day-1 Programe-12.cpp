#include <stdio.h>

int main() {
    int num;
    
    // get the number from the user
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // print the multiplication table
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num*i);
    }
    
    return 0;
}
