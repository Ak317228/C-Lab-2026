#include <stdio.h>

int main(){

    int num, pow;
    float prod = 1.0;
    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Enter the power: ");
    scanf("%d", &pow);
    if(pow > 0){
        for(int i = 1; i <= pow; i++){
            prod *= num;
        
        }
       
    }
    else if(pow == 0){
        prod = 1.0;
    }
    else{
        for(int i = 1; i <= -pow; i++){
            prod *= num;
        
        }
        prod = 1.0 / prod;
        

    }
    printf("%d raised to the power %d  = %.5f", num, pow, prod);

    return 0;
}