#include <stdio.h>
#include <stdlib.h>

// Define Date structure
typedef struct {
    int day;
    int month;
    int year;
} Date;

// Define Employee structure
typedef struct {
    char name[50];
    int emp_id;
    float salary;
    Date joining_date;
} Employee;

int main() {
    FILE *fp;
    int n;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    Employee employees[n];

    // Read employee data
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        getchar(); // consume leftover newline

        printf("Name: ");
        fgets(employees[i].name, sizeof(employees[i].name), stdin);

        printf("Employee ID: ");
        scanf("%d", &employees[i].emp_id);

        printf("Salary: ");
        scanf("%f", &employees[i].salary);

        printf("Joining Date (day month year): ");
        scanf("%d %d %d", &employees[i].joining_date.day,
                          &employees[i].joining_date.month,
                          &employees[i].joining_date.year);
    }

    // Write data to binary file
    fp = fopen("employees.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    fwrite(employees, sizeof(Employee), n, fp);
    fclose(fp);
    printf("\nEmployee data written to 'employees.dat'.\n");

    // Read data from binary file
    fp = fopen("employees.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    Employee readEmployees[n];
    fread(readEmployees, sizeof(Employee), n, fp);
    fclose(fp);

    // Print read data
    printf("\nEmployee Details from file:\n");
    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Name: %s", readEmployees[i].name);
        printf("Employee ID: %d\n", readEmployees[i].emp_id);
        printf("Salary: %.2f\n", readEmployees[i].salary);
        printf("Joining Date: %02d-%02d-%04d\n",
               readEmployees[i].joining_date.day,
               readEmployees[i].joining_date.month,
               readEmployees[i].joining_date.year);
    }

    return 0;
}
