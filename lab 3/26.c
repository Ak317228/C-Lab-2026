#include <stdio.h>

int length(char str[])
{
    int count = 0;

    while (str[count] != '\0' && str[count] != '\n')
        count++;

    return count;
}

int main()
{
    char str[200];

    printf("Enter a line of text: ");
    fgets(str, sizeof(str), stdin);

    printf("Length of string = %d", length(str));

    return 0;
}