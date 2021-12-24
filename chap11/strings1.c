#include<stdio.h>
#define MSG "I am symbolic string constant."
#define MAXLENGTH 81
int main(void)
{
    char words[MAXLENGTH] = "I am a string in an array.";
    const char * ptr1 = "Something is pointing at me."; // pointer notation
    puts("Here are some strings:");
    puts(MSG);
    puts(words);
    puts(ptr1);
    words[8] = 'p';
    puts(words);

    putchar('\n');
    printf("%s, %p, %c\n", "We", "are", *"space farers");

    return 0;
}
