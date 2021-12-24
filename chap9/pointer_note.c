Summary: Pointer-Related Operators
The address Operator:
&
when followed by a variable name, & gives the address of that variable.
Example: 
&nurse is the address of the variable "nurse".

The Indirection Operator(解引用):
*
When followed by a pointer name or an address, * gives the value stored at the pointed-to address.
Example:
nurse = 22;
ptr = &nurse; //pointer to nurse
val = *ptr; // assigns value at location ptr to val


In general, you can communicate two kinds of information about a variable to a function.
If you use a call of the form
function1(x);
you can transmit the value of x. 

If you use a call of the form
function2(&x);
You transmit the address of x. The first form requires that the function definition includes a 
formal argument(形式参数) of the same type as x:
int function1(int * ptr)

The second form requires the function definition to include a formal parameter that is a
pointer to the right type
int function2(int * ptr)

Use the first form if the function needs a value for some "calculateion" or "action".
Use the second form if the function needs to "alter variables" in the calling function.

----------------------------------------------------------

Variables: Names, Addresses, and Values
Pointer has hinged on the relationships between the "names", "address", and "values of variables".

Variable has two attributes: a "name" and a "value". (Not discussion the type.)
After the program has been compiled and loaded, the computer also thinks of the same variable as 
having t:wo attributes: an "address" and a "value". 

***An address is the computer's version of name. 地址就是变量在计算机内部的名称

C language can access the address through the & operator.

For example,
    &barn is the address of the variable barn.
    You can get the value from the name just by using the name.
    For example.
      printf("%d\n", barn) prints the value of barn.
      you can get the value from the address by using * operator.
      Given pbarn = &barn;, *pbarn is the value stored at address &barn.





















