#include <stdio.h>

void swapBalances(int *balance1, int *balance2) {
    int temp;  
    temp = *balance1; 
    *balance1 = *balance2; 
    *balance2 = temp; 
}

int main() {
    int accountBalance1, accountBalance2;

    printf("Enter the first account balance: ");
    scanf("%d", &accountBalance1);

    printf("Enter the second account balance: ");
    scanf("%d", &accountBalance2);

    printf("\nBalances before swapping:\n");
    printf("Account 1: %d\n", accountBalance1);
    printf("Account 2: %d\n", accountBalance2);

    swapBalances(&accountBalance1, &accountBalance2);

    printf("\nBalances after swapping:\n");
    printf("Account 1: %d\n", accountBalance1);
    printf("Account 2: %d\n", accountBalance2);

    return 0; 
}
