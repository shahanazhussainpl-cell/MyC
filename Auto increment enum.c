#include<stdio.h>
enum number {
    A=5,
    B,   //6
    C=10,
    D,   //11
};
int main() {
    enum number n = B;
    printf("%d",B);
}
