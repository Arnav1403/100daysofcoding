#include <stdio.h>

// Define structure for Student
typedef struct {
    char name[50];
    int roll_no;
    float marks;
} Student;

int main() {
    Student s;
    Student *ptr = &s;  // Pointer to structure

    // Modify structure members using pointer
    printf("Enter student name: ");
    getchar(); // consume leftover newline
    fgets(ptr->name, sizeof(ptr->name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &ptr->roll_no);

    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

    // Display structure members using pointer
    printf("\nStudent Details:\n");
    printf("Name: %s", ptr->name);
    printf("Roll Number: %d\n", ptr->roll_no);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
