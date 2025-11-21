#include <stdio.h>
#include <string.h>


typedef struct {
    char productName[50];
    double revenuePerUnit;
} ProductRevenue;


typedef struct {
    char branchName[50];
    char productName[50];
    int unitsShipped;
} Shipment;

 
double getRevenuePerUnit(const char* productName, const ProductRevenue* productRevenues, int numProductRevenues) {
    for (int i = 0; i < numProductRevenues; i++) {
        if (strcmp(productName, productRevenues[i].productName) == 0) {
            return productRevenues[i].revenuePerUnit;
        }
    }
    return 0.0; // Product not found
}

int main() {
    
    ProductRevenue productRevenues[] = {
        {"Laptop", 1200.00},
        {"Mouse", 25.50},
        {"Keyboard", 75.00},
        {"Monitor", 300.00}
    };
    int numProductRevenues = sizeof(productRevenues) / sizeof(productRevenues[0]);

    
    Shipment shipments[] = {
        {"BranchA", "Laptop", 5},
        {"BranchB", "Mouse", 10},
        {"BranchA", "Keyboard", 3},
        {"BranchC", "Monitor", 7},
        {"BranchB", "Laptop", 2},
        {"BranchA", "Monitor", 4}
    };
    int numShipments = sizeof(shipments) / sizeof(shipments[0]);

    
    char uniqueBranches[100][50];
    double branchRevenues[100] = {0.0};
    int numUniqueBranches = 0;

    for (int i = 0; i < numShipments; i++) {
        double revenuePerUnit = getRevenuePerUnit(shipments[i].productName, productRevenues, numProductRevenues);
        double shipmentRevenue = revenuePerUnit * shipments[i].unitsShipped;

        int branchFound = 0;
        for (int j = 0; j < numUniqueBranches; j++) {
            if (strcmp(shipments[i].branchName, uniqueBranches[j]) == 0) {
                branchRevenues[j] += shipmentRevenue;
                branchFound = 1;
                break;
            }
        }
        if (!branchFound) {
            strcpy(uniqueBranches[numUniqueBranches], shipments[i].branchName);
            branchRevenues[numUniqueBranches] = shipmentRevenue;
            numUniqueBranches++;
        }
    }

    
    printf("Total Revenue per Branch:\n");
    for (int i = 0; i < numUniqueBranches; i++) {
        printf("%s: %.2lf\n", uniqueBranches[i], branchRevenues[i]);
    }

    return 0;
}
