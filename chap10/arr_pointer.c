#include<stdio.h>
int main(void){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int index; 
    for(index = 0; index < 10; index++){
        printf("Number %2d 's address is %p and its value is %2d.\n", index + 1, arr + index, *(arr + index));
    }

    printf("%p", arr);


    return 0;
}
