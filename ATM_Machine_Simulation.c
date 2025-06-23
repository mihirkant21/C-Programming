#include <stdio.h>

int main() {
    int pin = 1234, enteredPin, choice;
    float balance = 10000, withdraw, deposit;

    printf("Enter your PIN: ");
    scanf("%d", &enteredPin);

    if(enteredPin != pin) {
        printf("Incorrect PIN! Exiting...\n");
        return 0;
    }

    do {
        printf("\n===== ATM Menu =====\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw\n");
        printf("3. Deposit\n");
        printf("4. Exit\n");
        printf("Choose option: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Your balance: Rs. %.2f\n", balance);
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &withdraw);
                if(withdraw > balance) {
                    printf("Insufficient balance!\n");
                } else {
                    balance -= withdraw;
                    printf("Please collect cash. New balance: Rs. %.2f\n", balance);
                }
                break;

            case 3:
                printf("Enter amount to deposit: ");
                scanf("%f", &deposit);
                balance += deposit;
                printf("Amount deposited. New balance: Rs. %.2f\n", balance);
                break;

            case 4:
                printf("Thank you! Visit again.\n");
                break;

            default:
                printf("Invalid option! Try again.\n");
        }

    } while(choice != 4);

    return 0;
}
