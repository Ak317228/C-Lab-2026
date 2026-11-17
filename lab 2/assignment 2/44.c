#include <stdio.h>

int main(){
    int a[10], i;
    int odd = 0, even = 0;

    printf("Enter 10 integers:\n");

    for(i = 0; i < 10; i++){
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 10; i++){
        if(a[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Total even numbers = %d\n", even);
    printf("Total odd numbers = %d", odd);

    return 0;
}