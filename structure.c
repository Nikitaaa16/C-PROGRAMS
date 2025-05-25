#include <stdio.h>

// Define the structure Student
struct Student {
    int roll_no;
    float marks1;
    float marks2;
    float marks3;
};

int main() {
    struct Student students[10];
    int i;
    float average;

    // Initialize the fields of 10 students
    for (i = 0; i < 10; i++) {
        printf("Enter details for student %d:\n", i + 1);

        printf("Roll number: ");
        scanf("%d", &students[i].roll_no);

        printf("Marks in subject 1: ");
        scanf("%f", &students[i].marks1);

        printf("Marks in subject 2: ");
        scanf("%f", &students[i].marks2);

        printf("Marks in subject 3: ");
        scanf("%f", &students[i].marks3);

        printf("\n");
    }

    // Print details and calculate average marks
    printf("Details of the students:\n");
    for (i = 0; i < 10; i++) {
        average = (students[i].marks1 + students[i].marks2 + students[i].marks3) / 3;

        printf("Student %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].roll_no);
        printf("Marks: %.2f, %.2f, %.2f\n", students[i].marks1, students[i].marks2, students[i].marks3);
        printf("Average Marks: %.2f\n\n", average);
    }

    return 0;
}