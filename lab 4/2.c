#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], ch;

    printf("Enter a string: ");
    scanf("%99s", str);

    printf("Enter a character to search: ");
    scanf(" %c", &ch);

    if (strchr(str, ch) != NULL)
        printf("Character is present");
    else
        printf("Character is not present");

    return 0;
}