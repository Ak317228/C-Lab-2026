#include <stdio.h>

int main()
{
    char name[100];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("ASCII codes are:\n");

    for (int i = 0; name[i] != '\0' && name[i] != '\n'; i++)
    {
        printf("%c = %d\n", name[i], (unsigned char)name[i]);
    }

    return 0;
}