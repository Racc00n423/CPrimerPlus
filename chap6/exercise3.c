#include<stdio.h>
int main(void){
    char letter;
    char f = 'F';
    for(letter = 1; letter <= 6; letter++){
        for(int i = 0; i < letter; i++){
          printf("%c", f - i);
        }
        printf("\n");
    }
    return 0;
}
