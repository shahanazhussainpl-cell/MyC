#include<stdio.h>
int main() {
    union shanuu {
        int age;
        float mark;
    };
    union shanuu s;
    s.age=10;
    printf("%d\n",s.age);
    s.mark=10.4;
    
    printf("%f\n",s.mark);
    printf("%d\n",s.age);
}
