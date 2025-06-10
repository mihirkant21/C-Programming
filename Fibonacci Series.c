#include <stdio.h>

int main() {
    int n, i;
    long long first = 0, second = 1, next;

    
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci Series: \n");

    for (i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;  // first two terms are 0 and 1
        } else {
            next = first + second;  // next term is the sum of the previous two
            first = second;          // update first6
            second = next;           // update second
        }
        printf("%lld ", next);      
    }
    
    printf("\n");
    return 0;
}
