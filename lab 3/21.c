#include <stdio.h>

long long factorial(int n)
{
    long long fact = 1;

    for (int i = 1; i <= n; i++)
        fact *= i;

    return fact;
}

int main()
{
    int n, r;
    long long ncr;

    printf("Enter N and R: ");
    scanf("%d %d", &n, &r);

    if (n < 0 || r < 0 || r > n || n > 20)
    {
        printf("Invalid input");
        return 0;
    }

    ncr = factorial(n) /
          (factorial(r) * factorial(n - r));

    printf("NCR = %lld", ncr);

    return 0;
}