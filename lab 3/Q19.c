#include <stdio.h>

void fibonacci(int n)
{
    int a = 0, b = 1, c;

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);

        c = a + b;
        a = b;
        b = c;
    }

    printf("\n");
}

int main()
{
    printf("First 5 Fibonacci numbers:\n");
    fibonacci(5);

    printf("First 10 Fibonacci numbers:\n");
    fibonacci(10);

    printf("First 15 Fibonacci numbers:\n");
    fibonacci(15);

    return 0;
}