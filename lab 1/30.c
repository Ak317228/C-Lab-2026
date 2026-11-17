#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, remainder, originalNum, result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
    originalNum = num;

    while(num != 0){
        remainder = num % 10;
        result = result * 10 + remainder;
        num /= 10;    
    
    }
    printf("%d reversed = %d", originalNum, result);

    return 0;
}