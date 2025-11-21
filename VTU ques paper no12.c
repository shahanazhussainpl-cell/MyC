#include<stdio.h>

void previewExchange(double amount1, double amount2, double exchangeRate) {
    printf("\n--- Previewing Exchange ---\n");
     
    double preview1 = amount1 * exchangeRate;
    double preview2 = amount2 / exchangeRate;
    printf("Original: %.2f (Unit A) <=> %.2f (Unit B)\n", amount1, amount2);
    printf("Preview:  %.2f (Unit A) <=> %.2f (Unit B)\n", amount1, preview2);
    printf("---------------------------\n");
}


void performExchange(double *amount1, double *amount2, double exchangeRate) {
    printf("\nPerforming actual exchange...\n");
    
    *amount1 = *amount1 * exchangeRate;
    *amount2 = *amount2 / exchangeRate;
    printf("Exchange complete.\n");
}

int main() {
    double currencyA = 100.0;
    double currencyB = 1.2; 
    int choice;

    printf("Current amounts: %.2f (Unit A) and %.2f (Unit B)\n", currencyA, currencyB);
    printf("Available actions:\n");
    printf("1. Preview exchange (Unit A to Unit B)\n");
    printf("2. Perform exchange (Unit A to Unit B)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        
        previewExchange(currencyA, currencyB, currencyA / currencyB);
    } else if (choice == 2) {
        
        performExchange(&currencyA, &currencyB, currencyA / currencyB);
        printf("Updated amounts: %.2f (Unit A) and %.2f (Unit B)\n", currencyA, currencyB);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
