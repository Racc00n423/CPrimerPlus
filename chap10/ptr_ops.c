// ptr_ops.c -- pointer operations
#include<stdio.h>
int main(void)
{
    int urn[5] = {100, 200, 300, 400, 500};
    int * ptr1, * ptr2, *ptr3;

    //1. assignment
    ptr1 = urn;     //assign an address to a pointer
    ptr2 = &urn[2]; //ditto 

    //2. Value finding(dereferencing)
    //3. Taking a pointer address
    //dereference a pointer and take the address of a pointer
    printf("Poniter value, dereferenced pointer, pointer address:\n");
    printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n",
            ptr1, *ptr1, &ptr1);

    //pointer addition
    //4. Adding an integer to a pointer 
    ptr3 = ptr1 + 4;
    printf("\nadding an int to a pointer:\n");
    printf("ptr + 4 = %p, *(ptr4 + 3) = %d\n",
            ptr1 + 4, *(ptr1+3));
   
    //5. Incrementing a pointer
    ptr1++; // increment a pointer
    printf("\nvalues after ptr1++:\n");
    printf("ptr1 = %p, *ptr1 = %d, &ptr1=%p\n",
            ptr1, *ptr1, &ptr1);
   
    //6. Decrementing a pointer
    ptr2--; // decrement a pointer
    printf("\nvalues after --ptr2:\n");
    printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n",
            ptr2, *ptr2, &ptr2);
    
    --ptr1; // resotre to original value
    ++ptr2; // resotre to original value
    printf("\nPointers reset to original values:\n");
    printf("ptr1 = %p, ptr2 = %p\n", ptr1, ptr2); 

    // Subtracting an integer from a pointer
    //subtract one pointer from another
    printf("\nPointers reset to original values:\n");
    printf("ptr2 = %p, ptr1 = %p, ptr2 - ptr1 = %td\n",
            ptr2, ptr1, ptr2 - ptr1);
    printf("\nsubtracting an int from a pointer:\n");
    printf("ptr3 = %p, ptr3 - 2 = %p\n",
            ptr3, ptr3 - 2);

    return 0;


}







