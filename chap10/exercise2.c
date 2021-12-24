#include<stdio.h>
void copy_arr(double *target, double *source, int arr_size); // copy with array notation
void copy_ptr(double *target, double *source, int arr_size); // copy with pointer notation
void copy_ptrs(double *target, double *source_start, double *source_end); // copy with two pointers

int main(void)
{
    int const arr_size = 5;
    double source[arr_size] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[arr_size];
    double target2[arr_size];
    double target3[arr_size];

    //copy arrays
    copy_arr(target1, source, arr_size);
    copy_ptr(target2, source, arr_size);
    copy_ptrs(target3, source, source + arr_size);
    
    //printf array
    printf("%15s|%15s|%15s\n", "target1", "target2", "target3");
    for(int i = 0; i < arr_size; i++)
    {
        printf("%15.3f|%15.3f|%15.3f\n", target1[i], target2[i], target3[i]);
    }

    return 0;
}

void copy_arr(double *target, double *source, int arr_size)
{
    for(int i = 0; i < arr_size; i++)
    {
        target[i] = source[i];
    }
}

void copy_ptr(double *target, double *source, int arr_size)
{
    for(int i = 0; i < arr_size; i++)
    {
        *(target + i) = *(source + i);
    }
}

void copy_ptrs(double *target, double *source_start, double *source_end)
{
    for(double *ptr = source_start; ptr < source_end; ptr++, target++)
    {
        *target = *ptr;
    }
}
