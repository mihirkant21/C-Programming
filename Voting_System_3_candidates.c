#include <stdio.h>

int main() {
    int candidate1 = 0, candidate2 = 0, candidate3 = 0, spoilt = 0;
    int vote, voters, i;

    printf("Enter number of voters: ");
    scanf("%d", &voters);

    for(i = 1; i <= voters; i++) {
        printf("\nVoter %d — Cast your vote:\n", i);
        printf("1. Candidate 1\n");
        printf("2. Candidate 2\n");
        printf("3. Candidate 3\n");
        printf("Enter your choice (1-3): ");
        scanf("%d", &vote);

        switch(vote) {
            case 1:
                candidate1++;
                break;
            case 2:
                candidate2++;
                break;
            case 3:
                candidate3++;
                break;
            default:
                printf("Invalid vote! Counted as spoilt.\n");
                spoilt++;
        }
    }

    printf("\n===== Voting Result =====\n");
    printf("Candidate 1: %d votes\n", candidate1);
    printf("Candidate 2: %d votes\n", candidate2);
    printf("Candidate 3: %d votes\n", candidate3);
    printf("Spoilt votes: %d\n", spoilt);

    // Determine winner
    if(candidate1 > candidate2 && candidate1 > candidate3)
        printf("Candidate 1 is the WINNER!\n");
    else if(candidate2 > candidate1 && candidate2 > candidate3)
        printf("Candidate 2 is the WINNER!\n");
    else if(candidate3 > candidate1 && candidate3 > candidate2)
        printf("Candidate 3 is the WINNER!\n");
    else
        printf("It is a TIE or No clear winner.\n");

    return 0;
}
