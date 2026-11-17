#include <stdio.h>

#include <stdlib.h>

int intPow(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main(){

    int num, originalNum, remainder, digits, result = 0;
    char buf[50];
    printf("Enter an integer:");
    scanf("%d", &num);

    
    digits = sprintf(buf, "%d", abs(num));

    originalNum = num;

    while(num != 0){
        remainder = num % 10;
        result += intPow(remainder, digits);
        num /= 10;
    }

    if(result == abs(originalNum)){
        printf("%d is an armstrong number", originalNum);

    }
    else{
        printf("%d is not an armstrong number", originalNum);
    }

    return 0;
}