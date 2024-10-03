
#include <stdio.h>

int main() {
    int bookID, dueDate, returnDate, daysOverdue;
    float fineRate, fineAmount;

    // Input from user
    printf("Enter Book ID: ");
    scanf("%d", &bookID);
    printf("Enter Due Date: ");
    scanf("%d", &dueDate);
    printf("Enter Return Date: ");
    scanf("%d", &returnDate);

    // Calculate days overdue
    daysOverdue = returnDate - dueDate;

    // Determine fine rate using if-else statement
    if (daysOverdue <= 7) {
        fineRate = 20.0;
    } else if (daysOverdue <= 14) {
        fineRate = 50.0;
    } else {
        fineRate = 100.0;
    }

    // Calculate fine amount
    fineAmount = daysOverdue * fineRate;

    // Display output
    printf("Book ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Fine Rate: Ksh %.2f\n", fineRate);
    printf("Fine Amount: Ksh %.2f\n", fineAmount);

    return 0;
}