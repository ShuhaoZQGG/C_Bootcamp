#include <stdio.h>

int main() {
    double speedOfLight = 299792458.0;  // Speed of light in meters per second
    double secondsPerDay = 86400.0;   // Number of seconds in a day
    double distance;
    int days;

    // Prompt the user to enter the number of days
    printf("Enter the number of days: ");
    scanf("%d", &days);

    // Calculate the distance traveled by light in meters
    distance = speedOfLight * secondsPerDay * days;

    // Display the distance in meters
    printf("Light will travel approximately %.2f meters in %d days.\n", distance, days);

    return 0;
}