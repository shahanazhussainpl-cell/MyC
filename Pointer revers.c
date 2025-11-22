#include <stdio.h>
void reverseNumber(int *n, int *rev) {
    int temp = *n;
    *rev = 0;
    while (temp != 0) {
        *rev = (*rev * 10) + (temp % 10);
        temp = temp / 10;
    }
}
int main() {
    int num, reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    reverseNumber(&num, &reverse);
    printf("Reversed Number = %d\n", reverse);
}
