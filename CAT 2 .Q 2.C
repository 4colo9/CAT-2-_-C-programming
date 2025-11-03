/*Coleen Nicolette Kanyanya

PA106/G/28764/25

A programme that calculates the net pay*/

#include <stdio.h>

int main() {
    float hoursWorked, hourlyWage, grossPay, taxes, netPay;

    printf("Enter hours worked this week: ");
    scanf("%f", &hoursWorked);

    printf("Enter your hourly wage: ");
    scanf("%f", &hourlyWage);

    if (hoursWorked > 40) {
        grossPay = (40 * hourlyWage) + (hoursWorked - 40) * (1.5 * hourlyWage);
    } else {
        grossPay = hoursWorked * hourlyWage;
    }

    if (grossPay <= 600) {
        taxes = 0.15 * grossPay;
    } else {
        taxes = (0.15 * 600) + (0.20 * (grossPay - 600));
    }

    netPay = grossPay - taxes;

    printf("\nYour gross pay is: $%.2f\n", grossPay);
    printf("Your taxes are: $%.2f\n", taxes);
    printf("Your net pay is: $%.2f\n", netPay);

    return 0;
}
