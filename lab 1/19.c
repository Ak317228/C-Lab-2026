#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z'){
        printf("%c is a lowercase character", ch);
    }
    else{
        printf("%c is not a lowercase charater", ch);
    }

}