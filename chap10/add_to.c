// sum.c -- adds the same value to each member of an array
#include<stdio.h>
void add_to(double ar[], int n, double val);
int main(void)
{
    double prices[50];

    add_to(prices, 50, 1);
  

    for (int i = 0; i < 50; i++){
        printf("%.2f\n", prices[i]);
    }

    return 0;
}

void add_to(double ar[], int n, double val)
{
    int i;

    for(i = 0; i < n; i++)
        ar[i] += val;

}


