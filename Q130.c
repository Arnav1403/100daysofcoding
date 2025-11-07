#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s;
    FILE *fp;

    // Writing to the file
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter name, roll number, marks: ");
        scanf("%s %d %f", s.name, &s.roll, &s.marks);

        fprintf(fp, "%s %d %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(fp);

    // Reading from the file
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("\nStored Records:\n");

    while (fscanf(fp, "%s %d %f", s.name, &s.roll, &s.marks) == 3) {
        printf("Name: %s, Roll: %d, Marks: %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(fp);

    return 0;
}