#include <stdio.h>

int main() {
    int number;
    printf("Enter a number to unlock the next level: ");
    scanf("%d", &number);
    if (number >= 10 && number <= 100 && number % 7 != 0) {
        printf("Congratulations! You can unlock the next level.\n");
    } else {
        printf("Sorry, you cannot unlock the next level. Please try again.\n");
    }

    return 0;
}

