#include <stdio.h>
int main() {
    char id[20], pan[20], aadhar[20], apaar[20], dl[20], passport[20];
    printf("Enter ID: ");
    scanf("%s", id);
    printf("Enter PAN: ");
    scanf("%s", pan);
    printf("Enter Aadhar: ");
    scanf("%s", aadhar);
    printf("Enter APAAR: ");
    scanf("%s", apaar);
    printf("Enter Driving Licence: ");
    scanf("%s", dl);
    printf("Enter Passport: ");
    scanf("%s", passport);
    printf("\n--- ID DETAILS ---\n");
    printf("ID        : %s\n", id);
    printf("PAN       : %s\n", pan);
    printf("Aadhar    : %s\n", aadhar);
    printf("APAAR     : %s\n", apaar);
    printf("Licence   : %s\n", dl);
    printf("Passport  : %s\n", passport);

    return 0;
}
