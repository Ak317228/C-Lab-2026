#include <stdio.h>

int main(){
    int n, sum = 0;

    printf("Enter numbers (negative number to stop):\n");

    while(1){
        scanf("%d", &n);

        if(n < 0)
            break;

        sum = sum + n;
    }

    printf("Sum = %d", sum);

    return 0;
}