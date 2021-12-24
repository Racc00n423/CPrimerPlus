#include<stdio.h>

int main(void){

    const int min_per_hour = 60;
    int minutes;
    int time;


    printf("Enter the minutes you want to convert: ");
    while((scanf("%d", &minutes) == 1)){
        printf("\n");
        printf("You enter %d minutes, it is %d hours and %d minutes.\n", 
                minutes, 
                minutes / min_per_hour, 
                minutes % min_per_hour);

        if(minutes <= 0)
            return 0;
    printf("Enter the minutes you want to convert: ");
    }

    return 0;
}
