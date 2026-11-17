#include <stdio.h>

int main()
{
    int a[100], n, key, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to count: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
            count++;
    }

    printf("Occurrence of %d = %d", key, count);

    return 0;
}