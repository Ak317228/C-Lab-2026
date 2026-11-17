#include <stdio.h>
#include <string.h>

int main(){
    char str1[100], str2[100], str3[200];

    printf("Enter first string: ");
    scanf("%99s", str1);

    printf("Enter second string: ");
    scanf("%99s", str2);

    printf("Length = %zu\n", strlen(str1));

    strcpy(str3, str1);
    printf("Copied string = %s\n", str3);

    strcat(str1, str2);
    printf("Concatenated string = %s\n", str1);

    if (strcmp(str3, str2) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    printf("Reversed string = ");
    for (int i = strlen(str3) - 1; i >= 0; i--)
        printf("%c", str3[i]);

    return 0;
}