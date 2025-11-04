#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char date[20], day[3], month[3], year[5];
    char *months[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    int m;

    printf("Enter date in format dd/mm/yyyy: ");
    gets(date);  // Note: gets() is unsafe; use fgets() in real programs

    // Extract day, month, and year parts
    strncpy(day, date, 2);
    day[2] = '\0';

    strncpy(month, date + 3, 2);
    month[2] = '\0';

    strcpy(year, date + 6);

    // Convert month to integer
    m = atoi(month);

    if (m < 1 || m > 12) {
        printf("Invalid month entered.\n");
        return 0;
    }

    // Print formatted date
    printf("Formatted Date: %s-%s-%s\n", day, months[m - 1], year);

    return 0;
}
