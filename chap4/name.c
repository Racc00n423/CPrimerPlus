#include<stdio.h>
int main(void){
    char firstName[20];
    char lastName[20];
    
    printf("Enter first name and last name:");
    scanf("%s%s", firstName, lastName);
    printf("Your name is: %s %s\n", firstName, lastName);

    return 0;
}
