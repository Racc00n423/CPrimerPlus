#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int reverse(int *arr, int arr_size);

int main(void)
{
    int const SIZE = 10;
    int arr[SIZE];

    srand(time(NULL));

    for(int i = 0; i < SIZE; i++)
        arr[i] = rand() % 100;

    printf("The original array is: ");
    for(int i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);
    printf("\n");

    reverse(arr, SIZE);

    return 0;
}

int reverse(int *arr, int arr_size)
{
   int reverse_arr[arr_size]; 
    
   for(int i = 0; i < arr_size; i++)
      reverse_arr[i] = arr[arr_size - i - 1];

    printf("The reversed array is: ");
    for(int i = 0; i < arr_size; i++)
         printf("%d ", reverse_arr[i]);
    printf("\n");

   return 0;
}




