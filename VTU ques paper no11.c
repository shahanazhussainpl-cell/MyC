#include <stdio.h>
#include <stdlib.h> 

#define MAX_NAME_LENGTH 30
#define MAX_FULL_NAME_LENGTH 50
#define SCREEN_WIDTH 20 


int stringLength(const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}


void concatenateStrings(char* destination, const char* str1, const char* str2) {
    int i = 0;
    int j = 0;

    
    while (str1[j] != '\0') {
        destination[i] = str1[j];
        i++;
        j++;
    }

    
    destination[i] = ' ';
    i++;
    j = 0;
    while (str2[j] != '\0') {
        destination[i] = str2[j];
        i++;
        j++;
    }

    
    destination[i] = '\0';
}


void manageContact(const char* firstName, const char* lastName) {
    char fullName[MAX_FULL_NAME_LENGTH];
    int length;

    
    concatenateStrings(fullName, firstName, lastName);

    
    length = stringLength(fullName);

    printf("Full Name: %s\n", fullName);
    printf("Length: %d\n", length);

    
    if (length > SCREEN_WIDTH) {
        printf("Warning: The full name exceeds the simulated screen width of %d characters.\n", SCREEN_WIDTH);
        printf("It might be truncated when displayed.\n");
    } else {
        printf("The full name fits within the screen width of %d characters.\n", SCREEN_WIDTH);
    }
}

int main() {
  
    char firstName1[] = "John";
    char lastName1[] = "Doe";
    printf("--- Contact 1 ---\n");
    manageContact(firstName1, lastName1);
    printf("\n");

    
    char firstName2[] = "Theodore";
    char lastName2[] = "Longname-Washington";
    printf("--- Contact 2 ---\n");
    manageContact(firstName2, lastName2);
    printf("\n");

    return 0;
}
