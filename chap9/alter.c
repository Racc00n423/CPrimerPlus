#include<stdio.h>
void alter(int * pa, int * pb);

int main(void){

    int a, b;

    printf("Enter two int: ");
    scanf("%d%d", &a, &b);

    alter(&a, &b);
    printf("%d, %d\n", a, b);
}

void alter(int * pa, int * pb){
    int temp;
    temp = *pa + *pb;
    *pb = *pb - *pb;
    *pa = temp; 

}
