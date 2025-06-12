#include <stdio.h>

void flip() {
    char x;
    scanf(" %c", &x);

    if (x != 'z') {
        flip();
    }
    printf("%c", x);
}

int main() {
    printf("Enter characters (end with 'z'):\n");
    flip();
    return 0;
}

