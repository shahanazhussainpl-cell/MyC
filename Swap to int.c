#include <stdio.h>

int main() {
    int a, b;

    printf("Enter first integer (a): ");
    scanf("%d", &a);

    printf("Enter second integer (b): ");
    scanf("%d", &b);

    
    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nAfter swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
