#include <stdio.h>
#include <ctype.h>

int main(){
    char str[200];
    int characters = 0, words = 0, inWord = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++){
        characters++;

        if (!isspace(str[i]) && inWord == 0){
            words++;
            inWord = 1;
        }
        else if (isspace(str[i])){
            inWord = 0;
        }
    }

    printf("Total characters = %d\n", characters);
    printf("Total words = %d", words);

    return 0;
}