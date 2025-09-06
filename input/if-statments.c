#include <stdio.h>

int main()
{

  int age = 0;

  printf("How old are you? ");
  

  if(age >= 18){
    printf("You're an adult");
  }

  else if(age < 0){
    printf("You have not been born yet");
  }

  else if(age == 0){
    printf("You have just been born ");
  }

  else {
    printf("You're not an adult");
  }

  return 0;
}
