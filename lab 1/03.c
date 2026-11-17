#include <stdio.h>

int main(){
    float basic, da, hra, gross;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    printf("Enter DA: ");
    scanf("%f", &da);

    printf("Enter HRA: ");
    scanf("%f", &hra);

    gross = basic + da + hra;

    printf("Gross Salary = %.2f", gross);

    return 0;
}