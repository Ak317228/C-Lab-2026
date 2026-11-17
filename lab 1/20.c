#include <stdio.h>

int main()  {
    double n1, n2, res;
    char operator;

    printf("Enter the first number: ");
    scanf("%lf", &n1);

    printf("Enter the second number: ");
    scanf("%lf", &n2);

    printf("Enter the operator: ");
    scanf(" %c", &operator);

    switch(operator){
        case '+':
        res = n1 + n2;
        printf("Result = %.2lf\n", res);
        break;

        case '-':
            res = n1 - n2;
            printf("Result = %.2lf\n", res);
            break;
    
        case '*':
            res = n1 * n2;
            printf("Result = %.2lf\n", res);
            break;

        case '/':
            res = n1 / n2;
            printf("Result = %.2lf\n", res);
            break;
        default:
            printf("Error: Invalid operator");

    }

    return 0;
}