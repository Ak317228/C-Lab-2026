#include <stdio.h>

int main(){
    int total_seconds, hours, minutes, seconds;

    printf("Enter the seconds: ");
    scanf("%d", &total_seconds);

    hours = total_seconds / 3600;
    total_seconds %= 3600;

    minutes = total_seconds / 60;
    total_seconds %= 60;

    seconds = total_seconds;

    printf("The time is %d:%d:%d", hours, minutes, seconds);
    return 0;
}