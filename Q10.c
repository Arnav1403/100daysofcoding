#include <stdio.h>

int main() {
    int total_seconds, hours, minutes, seconds;

    // Input total seconds
    printf("Enter time in seconds: ");
    scanf("%d", &total_seconds);

    // Calculate hours, minutes, and seconds
    hours = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;

    // Display results
    printf("Time = %d hours, %d minutes, %d seconds\n", hours, minutes, seconds);

    return 0;
}
