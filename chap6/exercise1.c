#include<stdio.h>

int main(void){

   char letter_array[26];
   char letter;
   char a = 'a';

   for(int i = 0; i<=26; i++){
  
       printf("%c\n", letter_array[i] + a);

   }

    return 0;
}
