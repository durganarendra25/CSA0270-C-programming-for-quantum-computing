#include <stdio.h>

// Function to find the cube of a given number
int cube(int num) {
    return num * num * num;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Calling the cube function
    int cube_num = cube(num);

    printf("Cube of %d is %d", num, cube_num);

    return 0;
}
