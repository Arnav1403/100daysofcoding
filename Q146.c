#include <stdio.h>

// Define Date structure
typedef struct {
    int day;
    int month;
    int year;
} Date;

// Define Employee structure with nested Date
typedef struct {
    char name[50];
    int emp_id;
    float salary;
    Date joining_date;
} Employee;

int main() {
    Employee e;

    // Read employee details
    printf("Enter employee name: ");
    fgets(e.name, sizeof(e.name), stdin);

    printf("Enter employee ID: ");
    scanf("%d", &e.emp_id);

    printf("Enter salary: ");
    scanf("%f", &e.salary);

    printf("Enter joining date (day month year): ");
    scanf("%d %d %d", &e.joining_date.day, &e.joining_date.month, &e.joining_date.year);

    // Print employee details
    printf("\nEmployee Details:\n");
    printf("Name: %s", e.name);
    printf("Employee ID: %d\n", e.emp_id);
    printf("Salary: %.2f\n", e.salary);
    printf("Joining Date: %02d-%02d-%04d\n", e.joining_date.day, e.joining_date.month, e.joining_date.year);

    return 0;
}
