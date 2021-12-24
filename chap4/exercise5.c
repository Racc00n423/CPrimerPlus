#include<stdio.h>
int main(void){
    float mbs;
    float mb;
    int bit = 8;

    printf("Enter the speed(MB/s): ");
    scanf("%f", &mbs);
    printf("Enter the size(MB): ");
    scanf("%f", &mb);

    printf("At %.2f megabits per second, a file of %.2f megabytes\n", mbs, mb);
    printf("downloads in %.2f seconds.\n", mb*bit/mbs);

    
    return 0;
}
