#include <stdio.h>

// Define structure for Student
typedef struct {
    char name[50];
    int roll_no;
    float marks;
} Student;

int main() {
    Student s;

    // Read student details
    printf("Enter student name: ");
    fgets(s.name, sizeof(s.name), stdin);  // Read string with spaces

    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    // Print student details
    printf("\nStudent Details:\n");
    printf("Name: %s", s.name);  // fgets keeps the newline
    printf("Roll Number: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
