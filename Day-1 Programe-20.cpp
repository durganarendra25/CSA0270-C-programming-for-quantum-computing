#include <stdio.h>

int main()
{
    int rows, i, j, count = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Floyd's triangle of %d rows:\n", rows);

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }

    return 0;
}
