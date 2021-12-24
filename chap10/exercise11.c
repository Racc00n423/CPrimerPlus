#include<stdio.h>
#include<stdlib.h>
#define ROWS 3
#define COLUMS 5
void print_arr(int arr[][COLUMS], int row);
void pw_arr(int arr[][COLUMS], int row);

int main(void)
{
    int arr[ROWS][COLUMS];
    
    for(int i = 0; i < ROWS; i++)
        for(int j = 0; j < COLUMS; j++)
            arr[i][j] = rand() % 100;

    printf("the original array is:\n");
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLUMS; j++)
        {
            printf("%5d ", arr[i][j]);
        }
        putchar('\n');
    }   

    pw_arr(arr, ROWS);
    print_arr(arr,ROWS);

    return 0;
}

void print_arr(int arr[ROWS][COLUMS], int row)
{
    printf("the result array is:");
    for(int i = 0; i < ROWS; i++)
        for(int j = 0; j < COLUMS; j++)
            printf("%5d ", arr[i][j]);
    putchar('\n');
    
}

void pw_arr(int arr[ROWS][COLUMS], int row)
{
    for(int i = 0; i < ROWS; i++)
        for(int j = 0; j < COLUMS; j++)
            arr[i][j] = arr[i][j] * arr[i][j];
}
