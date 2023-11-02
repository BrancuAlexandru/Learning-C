#include <stdio.h>

int main () {
  int numberOfLoops;
  printf("How many times do you want this to loop? ");
  scanf("%d", &numberOfLoops);
  
  int inputNumber;
  printf("What number do you want to repeat? ");
  scanf("%d", &inputNumber);

  while (numberOfLoops > 0) {
    printf("%d\n", inputNumber);
    numberOfLoops--;
  }

  while(1) {}
}