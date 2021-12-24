#include<stdio.h>

int main(void){

    int day;
    const int week = 7;

    while( day >= 0){
        printf("Enter a day(enter q to quit): ");
        scanf("%d", &day);
        printf("\n");

        printf("%d days are %d weeks, %d days.\n", day, day / week, day % week);
    
    
    }


    return 0;
}
