#include <stdio.h>
#include <conio.h>
#include <string.h>

char loop (int numberOfLoops) {
  char inputStr[20];
  char inputTest[999];

  while (1) {
    printf("\nWhat word do you want to repeat? (Max 20 characters) ");
    scanf("%s", &inputTest);

    if (strlen(inputTest) <= 20) {
      strcpy(inputStr, inputTest);
      break;
    } else {
      printf("\nERROR: Invalid input (Maximum of 20 characters)\n");
    }
  }

  printf("\n");

  for (int i = 0; i < numberOfLoops; i++) {
    while (numberOfLoops > 0) {
      printf("%s\n", inputStr);
      numberOfLoops--;
    }
  }
  printf("\nPress any key to retry or X to exit the program.");

  char userInput = getch();

  if (userInput == 'x' || userInput == 'X') {
    return 'n';
  } else {
    return 'y';
  }
}

void main () {
  int usageCount = 0;

  while (1) {
    int numberOfLoops;

    if (usageCount > 0) {
      printf("\n\nHow many times do you want this to loop? (Max 10) ");
    } else {
      printf("How many times do you want this to loop? (Max 10) ");
    }

      // If input is invalid, reset the input buffer.
    if (scanf("%d", &numberOfLoops) < 1) {
      if (usageCount > 0) {
        printf("\nERROR: Invalid input (Not a number)\n\n");
        usageCount--;
      } else {
        printf("\nERROR: Invalid input (Not a number)\n\n");
      }
      fflush(stdin);
    } else {
      if (numberOfLoops <= 10) {
        char willContinue = loop(numberOfLoops);
        usageCount++;

        if (willContinue == 'n') {
          break;
        }
      } else {
        if (usageCount > 0) {
          printf("\nERROR: Invalid input (Maximum value is 10)");
        } else {
          printf("\nERROR: Invalid input (Maximum value is 10)\n\n");
        }
      }
    }
  }
}