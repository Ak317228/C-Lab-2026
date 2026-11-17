#include <stdio.h>
#include <ctype.h>

void checkVowel(char ch)
{
    ch = tolower((unsigned char)ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' ||
        ch == 'o' || ch == 'u')
        printf("Vowel");
    else
        printf("Not a vowel");
}

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    checkVowel(ch);

    return 0;
}