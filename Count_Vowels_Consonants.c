#include <stdio.h>
#include <ctype.h>

int main() {
    char name[100];
    int vowels = 0, consonants = 0, i;

    printf("Enter your name: ");
    scanf("%s", name);

    for(i = 0; name[i]; i++) {
        char ch = tolower(name[i]);
        if(isalpha(ch)) {
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels: %d, Consonants: %d\n", vowels, consonants);
    return 0;
}
