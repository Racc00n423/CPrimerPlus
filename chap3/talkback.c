#include<stdio.h>
#include<string.h>    // for strlen() prototype
#define DENSITY 62.4  //human density in lbs per cu ft <单位：磅/立方英尺>
int main(void){
  float weight, volume;
  int size, letters;
  char name[40];      //name is an array of 40 chars
  
  printf("Hi! What's you first name?\n");
  scanf("%s", name);
  printf("%s, what's is your weight in pounds?\n", name);
  scanf("%f", &weight);
 
  size = sizeof name;
  letters = strlen(name);
  volume = weight / DENSITY;
  printf("Well, %s, your volum is %2.2f cubic feet.\n", name, volume);
  printf("Also, your first name has %d letters, \n", letters);
  printf("and we have %d bytes to store it.\n", size);

  return 0;
}
