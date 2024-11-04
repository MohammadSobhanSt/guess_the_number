#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int myNum;
    int r = rand() % 100 + 1;
    int attempts = 0;

    srand(time(NULL));



    do {
        printf("%s", "Guess a number between 1 and 100: ");
        scanf("%d", &myNum);
        attempts++;

        if (myNum > r) {
            printf("%s\n", "Your number is higher");
        } else if (myNum < r) {
            printf("%s\n", "Your number is lower");
        } else {
            printf("Yay you guessed the number in %d attempts!\n", attempts);
            break;
        }
    } while (myNum != r);

    return 0;
}
