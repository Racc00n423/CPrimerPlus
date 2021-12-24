#include<stdio.h>
int main(void){
    float cm;
    char name[20];
    printf("Enter your height and name: ");
    scanf("%f%s", &cm, name);
    printf("%s, you are %.2f meter tall\n", name, cm/100);

    return 0;
}
