#include <stdio.h>

int main(){
    int a,i;
    int fact = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &a);

    if (a < 0){
        printf("Error: factorial of a negative number doesn't exist");
    }
    else{
        for (i = 1; i <= a; ++i){
            fact *= i;
        }
    printf("Factorial of %d is %d", a, fact);
    
    }
}