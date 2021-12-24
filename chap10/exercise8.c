#include<stdio.h>
#include<stdlib.h>
void copy_ptr(int *target, int *source);

int main(void)
{

    int target[3];
    int source[7] = { 1, 2, 3, 4, 5, 6, 7 };

    copy_ptr(target, source);

    //print the source array
    printf("The target array: ");
    for(int i = 0; i < 7; i++)
        printf("%d", source[i]);
    printf("\n");

    //printf the target array
    printf("The target array: ");
    for(int i = 0; i < 3; i++)
        printf("%d", target[i]);
    printf("\n");

    return 0;
}

void copy_ptr(int *target, int *source)
{
    for(int i = 2;  i <5; i++, target++)
    {
        *target = source[i];
    }
}



