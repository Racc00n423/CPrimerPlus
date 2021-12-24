//sum.c -- the expression ar[i]++ results in each element having 1 added to its value
#include<stdio.h>
int sum(int ar[], int n); //faulty code
int main(void){

    int ar[10];

    sum(ar, 10);


    for(int i = 0; i < 10; i++)
        printf("%d\n", ar[i]);

    return 0;
}

int sum(int ar[], int n)
{
    int i;
    int total = 0;

    for(i = 0; i < n; i++)
        total += ar[i]++;   // error increments each element
    return total;
}
