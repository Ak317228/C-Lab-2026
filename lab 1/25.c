#include <stdio.h>

int main(){

    int a, b;
    printf("Multiplication Table\n");
    printf("Enter a number: ");
    scanf("%d", &a);

    printf("How many terms do you want in the table: ");
    scanf("%d\n", &b);

    for(int i = 1; i <= b; i++){
        printf("%d * %d = %d\n", i, a, a*i);
    }

    return 0;
}