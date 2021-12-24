#include<stdio.h>

int main(void){
    int first_operand, second_operand;
    float result;

    printf("This program computes moduli.\n");
    printf("Enter an integer to server as the second operand: ");
    scanf("%d", &second_operand);

    printf("Now enter the first oeprand: ");
    scanf("%d", &first_operand);
    printf("%d %% %d is %d.\n", second_operand, first_operand, first_operand % second_operand);



    return 0;
}
