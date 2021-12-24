// write a function that returns the smallest value soted in an array-of-int.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int min_int(int *arr, int arr_size); // function prototype

int main(void)
{
    const int SIZE = 10;
    int test[SIZE];

    srand(time(NULL)); //seed random number generator

    // initialize test array with radom ints between 0 and 99;
    for( int i = 0; i < SIZE; i++ )
        test[i] = rand() % 100;

    printf("The minimum of ");
    for(int i = 0; i < SIZE; i++)
        printf("%d, ", test[i]);
    printf("is: %d\n", min_int(test, SIZE));

    return 0;
}

int min_int(int *arr, int arr_size)
{
    int min = arr[0];
    for(int i = 0; i < arr_size; i++)
    {
        if(arr[i] < min)
            min = arr[i];
    }

    return min;
}
