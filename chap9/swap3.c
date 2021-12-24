#include<stdio.h>
void interchange(int *u, int *v);
int main(void)
{
    int x = 5, y = 10;
    printf("Originally x = %d and y = %d.\n", x, y);
    interchange(&x, &y); //send address to function
    printf("Now x = %d and y = %d.\n", x, y);
    
    return 0;
}

void interchange(int *u, int *v)
{
    int temp;   //to store the value of x in temp
    temp = *u;  //temp get value that u points to, temp has the value &x. u points to x.
                //*u gives you the value of x
    *u = *v;    // has x = y;
    *v = temp;
}
