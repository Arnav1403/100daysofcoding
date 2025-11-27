#include <stdio.h>

// Define enum for traffic lights
typedef enum {
    RED,
    YELLOW,
    GREEN
} TrafficLight;

int main() {
    TrafficLight light;

    // Example: assign a value
    light = RED;

    // Check the value and print corresponding action
    switch(light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid traffic light\n");
    }

    return 0;
}
