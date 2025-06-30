#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1000];
    int alphabet[26] = {0}, i;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i]; i++) {
        if(isalpha(str[i])) {
            alphabet[tolower(str[i]) - 'a'] = 1;
        }
    }

    for(i = 0; i < 26; i++) {
        if(alphabet[i] == 0) {
            printf("Not a pangram.\n");
            return 0;
        }
    }

    printf("It is a pangram.\n");
    return 0;
}
