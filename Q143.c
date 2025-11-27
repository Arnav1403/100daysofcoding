#include <stdio.h>

// Define structure for Student
typedef struct {
    char name[50];
    int roll_no;
    float marks;
} Student;

int main() {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    Student students[n];

    // Read student details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        getchar(); // Consume leftover newline
        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);

        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Find student with highest marks
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[maxIndex].marks) {
            maxIndex = i;
        }
    }

    // Print student with highest marks
    printf("\nStudent with highest marks:\n");
    printf("Name: %s", students[maxIndex].name);
    printf("Roll Number: %d\n", students[maxIndex].roll_no);
    printf("Marks: %.2f\n", students[maxIndex].marks);

    return 0;
}
