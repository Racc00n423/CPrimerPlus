#include<stdio.h>
#include<stdlib.h>
#define COLS 4

int sum2d(int ar[][COLS], int rows);

int main(void)
{
    int arr1[5][4];
    int arr2[100][4];
    int arr3[2][4];

    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 4; j++)
         arr1[i][j] = rand() / (int) RAND_MAX;

    sum2d(arr1, 5);

    return 0;
}

int sum2d(int ar[][COLS], int rows)
{
    int r; // rows
    int c; // colum
    int tot = 0;


    printf("The array has %d rows and %d colums.\n", COLS, rows);
    for(r = 0; r < rows; r++)
        for(c = 0; c < COLS; c++)
          printf("%d ", ar[r][c]);

    for(r = 0; r < rows; r++)
        for(c = 0; c < COLS; c++)
            tot += ar[r][c];
    return tot;
}
