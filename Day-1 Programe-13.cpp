#include <stdio.h>

int main() {
    int year;
    
    // get the year from the user
    printf("Enter a year: ");
    scanf("%d", &year);
    
    // check if it's a leap year
    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
        printf("%d is a leap year", year);
    }
    else {
        printf("%d is not a leap year", year);
    }
    
    return 0;
}
