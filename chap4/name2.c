#include<stdio.h>
#include<string.h>
int main(void){
    char name[20];
    int name_length;

    printf("Enter first name and last name:");
    scanf("%s", name);
    printf("Your name is: \"%s\"\n", name); //print out name with quote
    printf("Your name is: \"%20s\"\n", name); //print out name with quote
    printf("Your name is: \"%-20s\"\n", name); //print out name with quote
    printf("\"%*s\"\n", name_length + 3, name);
    return 0;
}
