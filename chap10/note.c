Dereferencing an Uninitalized Pointer

int * pt; //an uninitialized pointer
*pt = 5;  // a terrible error

Creating a pointer only acclocates memory to 
store the pointer itself"指针本身的内存";
it dosen't allocate memory to store data" 数据的内存".
Therefore, before you use a pointer, it should be assigned 
a memory location that has already been allocated.
Do not dereference an uninitialized pointer.

double *pd; //uninitialized pointer
*pd = 2.4   //Dont do it

Given
int urn[3];
int *ptr1, *ptr2; 

//Valid
ptr1++;
ptr2 = ptr1 + 2;
ptr2 = urn + 1;

///Invalid
urn++;
ptr2 = ptr2 + ptr1;
ptr2 = urn * ptr1;


1. Must use pointers if you want a function to affect variables in the calling function.
2. It is to use in functions designed to manipulate arrays.2. It is to use in functions designed to manipulate arrays.

* * * * * * * * * * * * * * * * * * * * * * * * * * *
Protecting Array Contents
When writing a function, such as int, should have a choice of passing the int by value or of passing a pointer-to-int.
The usual rule is to pass quantities by value unless the program needs to alter the value, in which case you pass a pointer.

In Array, must to PASS a pointer. FOR EFFICIENCY.

* * * * * * * * * * * * * * * * * * * * * * * * * * *
If a function's intent is that it not change the contents of the array,
use the keyword const when declaring the formal parameter in the prototype and in the function definition.

For example:
int sum(const int ar[], int n); //prototype
itn sum(const int ar[], int n) //definition
{
    int i;
    int total = 0;

    for( i = 0; i < n; i++ )
        total += ar[i];
    return total;
}

The function should treat the array pointed to by ar as throguh the array contains constant data.
Using const this way dose not require that the original array be constant.
It just says that the function has to treat the array as though it were constant.
Using const provides the protecting for arrays that passing by value provides for fundamental types;
const prevents a function from modifying data in the calling function.




















