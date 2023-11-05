#include <stdio.h>
#include <conio.h>

void main () {

  while (1) {
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

    printf("Press any key to retry or X to exit the program.\n");

    char userInput = getch();

    if (userInput == 'x' || userInput == 'X') {
      break;
    }
  }
}