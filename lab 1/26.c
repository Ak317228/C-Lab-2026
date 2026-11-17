#include <stdio.h>

int main(){

    int n, sum_of_even = 0, sum_of_odd = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            sum_of_even += i;
        }
        else{
            sum_of_odd += i;
        }
    }
    printf("Sum of even numbers = %d\n", sum_of_even);
    printf("Sum of odd numbers = %d", sum_of_odd);

    return 0;
}