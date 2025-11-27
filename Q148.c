#include <stdio.h>
#include <string.h>

// Define structure for Student
typedef struct {
    char name[50];
    int roll_no;
    float marks;
} Student;

// Function to check if two students are identical
int areStudentsIdentical(Student s1, Student s2) {
    if (strcmp(s1.name, s2.name) == 0 &&
        s1.roll_no == s2.roll_no &&
        s1.marks == s2.marks) {
        return 1; // identical
    }
    return 0; // not identical
}

int main() {
    Student s1, s2;

    // Read first student
    printf("Enter details for student 1:\n");
    getchar(); // consume leftover newline
    printf("Name: ");
    fgets(s1.name, sizeof(s1.name), stdin);
    printf("Roll Number: ");
    scanf("%d", &s1.roll_no);
    printf("Marks: ");
    scanf("%f", &s1.marks);

    // Read second student
    printf("\nEnter details for student 2:\n");
    getchar(); // consume leftover newline
    printf("Name: ");
    fgets(s2.name, sizeof(s2.name), stdin);
    printf("Roll Number: ");
    scanf("%d", &s2.roll_no);
    printf("Marks: ");
    scanf("%f", &s2.marks);

    // Check if identical
    if (areStudentsIdentical(s1, s2)) {
        printf("\nThe two students are identical.\n");
    } else {
        printf("\nThe two students are NOT identical.\n");
    }

    return 0;
}
