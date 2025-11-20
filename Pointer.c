#include <stdio.h>
#include<string.h>
int main() {
int x=10;
int *p;
p=&x;
printf("value of x =%d\n",x);
printf("address of x=%p\n",&x);
printf("pointer of p stores=%p\n",p);
printf("value of pointer =%d\n",*p);
}
