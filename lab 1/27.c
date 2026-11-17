#include <stdio.h>
#include <stdbool.h>

int main(){
    
    int n;
    bool flag = true;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for(int i = 2; i < n; i++){
        
        if(n % i == 0){
            flag = false;
            break;
        }
    }
    if(flag){
        printf("Prime");
    }
    else{
        printf("Not prime");
    }

    return 0;
}