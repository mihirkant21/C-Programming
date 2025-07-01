#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Define structure for a polynomial term
typedef struct Term {
    int coeff;
    int power;
    struct Term* next;
} Term;

// Create a new node
Term* createTerm(int coeff, int power) {
    Term* newTerm = (Term*)malloc(sizeof(Term));
    newTerm->coeff = coeff;
    newTerm->power = power;
    newTerm->next = NULL;
    return newTerm;
}

// Insert a term at the end
Term* insertTerm(Term* head, int coeff, int power) {
    Term* newNode = createTerm(coeff, power);
    if (head == NULL)
        return newNode;

    Term* temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    
    temp->next = newNode;
    return head;
}

// Display the polynomial
void displayPolynomial(Term* head) {
    if (head == NULL) {
        printf("0\n");
        return;
    }

    while (head != NULL) {
        printf("%dx^%d", head->coeff, head->power);
        if (head->next != NULL)
            printf(" + ");
        head = head->next;
    }
    printf("\n");
}

// Evaluate polynomial for a given x
int evaluatePolynomial(Term* head, int x) {
    int result = 0;
    while (head != NULL) {
        result += head->coeff * pow(x, head->power);
        head = head->next;
    }
    return result;
}

// MAIN FUNCTION
int main() {
    Term* poly = NULL;
    int n, coeff, power, x;

    printf("Enter number of terms in polynomial: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Enter coefficient and power for term %d: ", i+1);
        scanf("%d%d", &coeff, &power);
        poly = insertTerm(poly, coeff, power);
    }

    printf("Polynomial: ");
    displayPolynomial(poly);

    printf("Enter value of x to evaluate: ");
    scanf("%d", &x);

    int value = evaluatePolynomial(poly, x);
    printf("Value of polynomial at x = %d is %d\n", x, value);

    return 0;
}
