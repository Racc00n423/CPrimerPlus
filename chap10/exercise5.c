#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int difference(int *arr, int arr_size);
int main(void)
{
    const int SIZE = 5;
    int arr[SIZE];

    srand(time(NULL));

    for(int i = 0; i < SIZE; i++)
        arr[i] = rand() % 100;

    //print array
    
    printf("Array:");
    for(int i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);
    printf("\nThe difference between the max and min is: %d\n", 
            difference(arr, SIZE));
    return 0;
}

int difference(int *arr, int arr_size)
{
    int difference;
    int min = arr[0];
    int max = arr[arr_size - 1];

    for(int i = 1; i < arr_size; i++)
    {
        if(arr[i] < min)
            min = arr[i];

        if(arr[i] > max)
            max = arr[i];
    }

    difference = max - min;

    return difference;
}
