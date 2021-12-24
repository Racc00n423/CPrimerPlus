#include<stdio.h>
#include<string.h>
int main(void){
    char firstName[20];
    char lastName[20];
    int firstName_length;
    int lastName_length;

    printf("Enter first name and last name: ");
    scanf("%s%s", firstName, lastName);
    printf("%s %s\n", firstName, lastName);
    printf("%*lu %*lu\n", 
            (int) strlen(firstName), strlen(firstName),
            (int) strlen(lastName), strlen(lastName));


    return 0;
}
