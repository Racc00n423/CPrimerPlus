#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int max(int *arr, int arr_size);

int main(void)
{
    const int SIZE = 10;

    int test[SIZE];

    srand(time(NULL));

    for(int i = 0; i < SIZE; i++) // store the value into the array
        test[i] = rand() % 100;

    printf("The maximum of ");
    for (int i = 0; i < SIZE; i++)
        printf("%d ", test[i]);
    printf("is: %d\n", max(test, SIZE));

    return 0;
}

int max(int *arr, int arr_size)
{
    int max = 0;
    for(int i = 1; i < arr_size; i++)
    {
        if(*(arr + i) > *(arr + max)) // if the value of array + i is greater than
            max = i;                  // the value of array + max(0). Then max equals                                      // to i.
    }

    return max;
}

