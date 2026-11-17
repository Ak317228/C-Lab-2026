#include <stdio.h>

int main(){
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b){
        if (a > c){
            printf("Maximum number = %d", a);
        }
    }
    else if (b > c){
        if (b > a){
            printf("Maximum number = %d", b);
        }
    }
    else {
            printf("Maximum number = %d", c);
        }
    return 0;
}