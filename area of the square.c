#include <stdio.h>

int main() {
    float side, area;
    char choice;

    do {
        // Prompt the user for the length of the side
        printf("Enter the length of the side of the square: ");
        scanf("%f", &side);

        // Check for valid input
        if (side < 0) {
            printf("Error: Length cannot be less than 0. Please try again.\n");
        } else {
            // Calculate and display the area
            area = side * side;
            printf("The area of the square is: %.2f\n", area);
        }

        // Ask the user if they want to compute another area
        printf("Do you want to compute the area of another square? (y/n): ");
        getchar(); // Clear the newline character from the buffer
        scanf("%c", &choice);

    } while (choice == 'y' || choice == 'Y'); // Repeat if the user wants to continue

    return 0;
}