#include <stdio.h>

int main() {
    // Declare variables to store user's age and annual income
    int age;
    float annualIncome;

    // Prompt user for their age
    printf("Please enter your age: ");
    scanf("%d", &age);

    // Prompt user for their annual income
    printf("Please enter your annual income: ");
    scanf("%f", &annualIncome);

    // Check if user is eligible for a loan
    if (age >= 21 && annualIncome >= 21000) {
        printf("Congratulations, you qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}