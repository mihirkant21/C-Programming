#include <stdio.h>

int main() {
    double income, tax;
    printf("Enter your income: ");
    scanf("%lf", &income);
    tax = (income <= 10000) ? 0 :
          (income <= 50000) ? (income - 10000) * 0.10 :
          (income <= 100000) ? (4000 + (income - 50000) * 0.20) :
                               (14000 + (income - 100000) * 0.30);
    printf("The calculated tax is: $%.2f\n", tax);

    return 0;
}
