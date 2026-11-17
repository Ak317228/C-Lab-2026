#include <stdio.h>

int main()
{
    int a[3][3], sum;

    printf("Enter matrix elements:\n");

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    for (int i = 0; i < 3; i++)
    {
        sum = 0;

        for (int j = 0; j < 3; j++)
            sum += a[i][j];

        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    return 0;
}