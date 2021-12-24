#include<stdio.h>

int main(void)
{

    char heart[]= "I love Tillie!";
    const char *head = "I love Millie!";

    for(int i = 0; i < 6; i++)
        putchar(heart[i]);
    putchar('\n');

    for(int i = 0; i < 6; i++)
        putchar(head[i]);
    putchar('\n');

    for(int i = 0; i < 6; i++)
        putchar(*(heart + i));
    putchar('\n');
    
    for(int i = 0; i < 6; i++)
        putchar(*(head + i));
    putchar('\n');

    while(*(head) != '\0')  //stop at end of string
        putchar(*(head++)); //print character, advance pointer

    head = heart; // head now points to the array heart

    




    return 0;
}
