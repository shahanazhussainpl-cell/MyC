#include <stdio.h>

int main() {
    int intValue;
    float floatValue;

    printf("Enter an integer: ");
    scanf("%d", &intValue);

    printf("Enter a float value: ");
    scanf("%f", &floatValue);

    printf("\nYou entered:\n");
    printf("Integer: %d\n", intValue);
    printf("Float: %.2f\n", floatValue); // %.2f shows float with 2 decimal places

    return 0;
}
