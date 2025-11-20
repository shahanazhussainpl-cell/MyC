#include<stdio.h>
#include<string.h>
int main() {
    char shanuu[10];
    printf("enter your string\n");
    scanf("%s",&shanuu);
    printf("%s",&shanuu);
    strcat(shanuu,"legend\n");
    printf("%s",shanuu);
}
