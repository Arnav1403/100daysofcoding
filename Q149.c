#include <stdio.h>
#include <stdlib.h>

// Define structure for Student
typedef struct {
    char name[50];
    int roll_no;
    float marks;
} Student;

int main() {
    // Dynamically allocate memory for a Student
    Student *s = (Student *)malloc(sizeof(Student));
    if (s == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Read student details
    printf("Enter student name: ");
    getchar(); // consume leftover newline
    fgets(s->name, sizeof(s->name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &s->roll_no);

    printf("Enter marks: ");
    scanf("%f", &s->marks);

    // Print student details
    printf("\nStudent Details:\n");
    printf("Name: %s", s->name);
    printf("Roll Number: %d\n", s->roll_no);
    printf("Marks: %.2f\n", s->marks);

    // Free allocated memory
    free(s);

    return 0;
}
