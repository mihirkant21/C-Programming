#include <stdio.h>

int main() {
    int num,result;

    printf("Enter an integer: ");
    scanf("%d", &num);
    result = (num % 2 == 0) ? "Even" : "Odd";

    printf("The number %d is %s.\n", num, result);

    return 0;
}
