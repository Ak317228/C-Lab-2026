#include <stdio.h>

int main(){

    int num, originalNum, remainder, result =0;

    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num;

    
    while(num != 0){
        remainder = num % 10;
        result = result * 10 + remainder;
        num /= 10;
    }
    if(result == originalNum){
        printf("%d is a palindrome", originalNum);
    }
    else{
        printf("%d is not a palindrome", originalNum);
    }


    return 0;
}