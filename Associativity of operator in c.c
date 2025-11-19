#include <stdio.h>

int main() {
    int a = 10, b = 5, c = 2, result;

    result = a + b * c; 
    printf("a + b * c = %d\n", result); 

    result = a - b - c; 
    printf("a - b - c = %d\n", result);

    int x, y, z;
    x = y = z = 100;
    printf("x = %d, y = %d, z = %d\n", x, y, z);
    result = (a + b) * c;
    printf("(a + b) * c = %d\n", result); 

    return 0;
}
