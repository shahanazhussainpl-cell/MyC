#include <stdio.h>
#include <stdbool.h> 

bool hasPassed(int sub1, int sub2, int sub3) {
    return (sub1 >= 40 && sub2 >= 40 && sub3 >= 40);
}

int main() {
    int subject1_marks, subject2_marks, subject3_marks;
    float average_marks;

    
    printf("Enter marks for Subject 1: ");
    scanf("%d", &subject1_marks);

    printf("Enter marks for Subject 2: ");
    scanf("%d", &subject2_marks);

    printf("Enter marks for Subject 3: ");
    scanf("%d", &subject3_marks);

    average_marks = (float)(subject1_marks + subject2_marks + subject3_marks) / 3;

    printf("\nAverage Marks: %.2f\n", average_marks);

    if (hasPassed(subject1_marks, subject2_marks, subject3_marks)) {
        printf("Result: Passed\n");
    } else {
        printf("Result: Failed\n");
    }

    return 0;
