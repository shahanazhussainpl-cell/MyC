#include<stdio.h>
int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2; // Calculate middle index

        
        if (arr[mid] == key) {
            return mid; // Return the index where the key is found
        }

        
        if (arr[mid] < key) {
            low = mid + 1;
        }
        
        else {
            high = mid - 1;
        }
    }
    return -1; // Key not found
}

int main() {
    int bookIDs[] = {101, 105, 112, 120, 135, 140, 155, 160, 175, 180}; // Sample Book IDs (must be sorted)
    int n = sizeof(bookIDs) / sizeof(bookIDs[0]); // Calculate the number of books
    int searchID; // Book ID to search for

    printf("Enter the Book ID to search: ");
    scanf("%d", &searchID);

    int result = binarySearch(bookIDs, 0, n - 1, searchID); // Perform binary search

    if (result != -1) {
        printf("Book with ID %d found at index %d.\n", searchID, result);
    } else {
        printf("Book with ID %d not found in the bookshelf.\n", searchID);
    }

    return 0;
}
