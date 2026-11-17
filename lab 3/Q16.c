#include <stdio.h>

void palindrome(int n)
{
    int original = n, rev = 0, rem;

    while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if (original == rev)
        printf("Palindrome");
    else
        printf("Not a palindrome");
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    palindrome(n);

    return 0;
}