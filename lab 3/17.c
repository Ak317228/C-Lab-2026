#include <stdio.h>

int power(int a, int b)
{
    int result = 1;

    for (int i = 1; i <= b; i++)
        result *= a;

    return result;
}

void armstrong(int n)
{
    int original = n, temp = n;
    int sum = 0, digits = 0, rem;

    do
    {
        digits++;
        temp /= 10;
    } while (temp != 0);

    temp = n;

    while (temp > 0)
    {
        rem = temp % 10;
        sum += power(rem, digits);
        temp /= 10;
    }

    if (sum == original)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    armstrong(n);

    return 0;
}