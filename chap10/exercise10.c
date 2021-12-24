#include<stdio.h>
void sum(int arr1[], int arr2[], int target[], int arr_size);

int main(void)
{
   const int arr_size = 4;
   int arr1[4] = {2, 4, 5, 8};
   int arr2[4] = {1, 0, 4, 6};
   int target[4];
  
   sum(arr1, arr2, target, arr_size);
   
   printf("The result is: ");
   for(int i = 0; i < arr_size; i++)
       printf("%d ", target[i]);
   printf("\n");

    return 0;
}


void sum(int arr1[], int arr2[], int target[], int arr_size)
{

    for(int i = 0; i < arr_size; i++)
    {
          target[i] = arr1[i] + arr2[i]; 
    }
}

