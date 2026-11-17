#include <stdio.h>
#include <math.h>

int main(){

    int x,n ;
    float y;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n == 1) {
        y = 1 + x;
    }
    else if (n == 2) {
        y = 1 + (x / n);
    }
    else if ( n == 3) {
        y = 1 + pow(x, n);
    }
    else if (n > 3 || n < 1){
        y = 1 + (n * x);
    }

    printf("The value of Y(%d, %d) is %.2f ", x, n, y);

    return 0;
}