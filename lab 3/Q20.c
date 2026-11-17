#include <stdio.h>

int prime(int n)
{
    if (n < 2)
        return 0;

    for (int i = 2; i <= n / i; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (prime(n) == 1)
        printf("Prime number");
    else
        printf("Not a prime number");

    return 0;
}