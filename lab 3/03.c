#include <stdio.h>

int main()
{
    int a[10], b[10], temp;

    printf("Enter first array:\n");
    for (int i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    printf("Enter second array:\n");
    for (int i = 0; i < 10; i++)
        scanf("%d", &b[i]);

    for (int i = 0; i < 10; i++)
    {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }

    printf("First array after swapping:\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", a[i]);

    printf("\nSecond array after swapping:\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", b[i]);

    return 0;
}