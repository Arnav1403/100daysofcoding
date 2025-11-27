#include <stdio.h>

// Define enum for gender
typedef enum {
    MALE,
    FEMALE,
    OTHER
} Gender;

// Define struct for a person
typedef struct {
    char name[50];
    int age;
    Gender gender;
} Person;

int main() {
    // Create a person
    Person p1 = {"Alice", 25, FEMALE};

    // Print person's details
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);

    // Print gender using switch
    printf("Gender: ");
    switch(p1.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
        default:
            printf("Unknown\n");
    }

    return 0;
}
