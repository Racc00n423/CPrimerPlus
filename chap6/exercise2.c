#include<stdio.h>

int main(void){

    for(int i = 1; i < 10; i++){
        for(int k = 1; k <= i; k++){
            printf("$");
        }
        printf("\n");
    }


    return 0;
}
