#include <stdio.h>

int main() {
    int lateDays;
    float fine = 0;

    // Input number of late days
    printf("Enter the number of late days: ");
    scanf("%d", &lateDays);

    // Calculate fine based on conditions
    if (lateDays <= 0) {
        printf("No fine. Book returned on time.\n");
    }
    else if (lateDays <= 5) {
        fine = lateDays * 2;
        printf("Fine = ₹%.2f\n", fine);
    }
    else if (lateDays <= 10) {
        fine = (5 * 2) + ((lateDays - 5) * 4);
        printf("Fine = ₹%.2f\n", fine);
    }
    else if (lateDays <= 30) {
        fine = (5 * 2) + (5 * 4) + ((lateDays - 10) * 6);
        printf("Fine = ₹%.2f\n", fine);
    }
    else {
        printf("Membership cancelled due to late return beyond 30 days.\n");
    }

    return 0;
}
