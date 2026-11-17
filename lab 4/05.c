#include <stdio.h>
#include <ctype.h>

int main(){
    char str[200];
    int lower = 0, upper = 0, digit = 0, special = 0;

    printf("Enter a line of text: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++){
        if (islower(str[i]))
            lower++;
        else if (isupper(str[i]))
            upper++;
        else if (isdigit(str[i]))
            digit++;
        else if (str[i] != '\n')
            special++;
    }

    printf("Lowercase letters = %d\n", lower);
    printf("Uppercase letters = %d\n", upper);
    printf("Digits = %d\n", digit);
    printf("Special symbols = %d\n", special);

    return 0;
}