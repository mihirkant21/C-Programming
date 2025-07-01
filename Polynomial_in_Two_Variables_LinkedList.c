#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Node structure for two-variable polynomial
typedef struct Term {
    int coeff;
    int pow_x;
    int pow_y;
    struct Term* next;
} Term;

// Function to create a new term
Term* createTerm(int coeff, int pow_x, int pow_y) {
    Term* newTerm = (Term*)malloc(sizeof(Term));
    newTerm->coeff = coeff;
    newTerm->pow_x = pow_x;
    newTerm->pow_y = pow_y;
    newTerm->next = NULL;
    return newTerm;
}

// Insert term at the end
Term* insertTerm(Term* head, int coeff, int pow_x, int pow_y) {
    Term* newNode = createTerm(coeff, pow_x, pow_y);
    if (head == NULL)
        return newNode;
    Term* temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
    return head;
}

// Display polynomial
void displayPolynomial(Term* head) {
    while (head != NULL) {
        printf("%dx^%dy^%d", head->coeff, head->pow_x, head->pow_y);
        if (head->next != NULL)
            printf(" + ");
        head = head->next;
    }
    printf("\n");
}

// Evaluate the polynomial for given x and y
int evaluatePolynomial(Term* head, int x, int y) {
    int result = 0;
    while (head != NULL) {
        result += head->coeff * pow(x, head->pow_x) * pow(y, head->pow_y);
        head = head->next;
    }
    return result;
}

// Main function
int main() {
    Term* poly = NULL;
    int n, coeff, pow_x, pow_y, x, y;

    printf("Enter number of terms in the polynomial: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter coefficient, power of x, and power of y for term %d: ", i + 1);
        scanf("%d %d %d", &coeff, &pow_x, &pow_y);
        poly = insertTerm(poly, coeff, pow_x, pow_y);
    }

    printf("\nPolynomial: ");
    displayPolynomial(poly);

    printf("Enter value of x and y: ");
    scanf("%d %d", &x, &y);

    int value = evaluatePolynomial(poly, x, y);
    printf("Value of polynomial at x = %d, y = %d is %d\n", x, y, value);

    return 0;
}
