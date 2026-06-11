/*
1. Write a C program that takes an integer from the user and determines whether 
the number is even or odd. 

Description: The program should prompt the user to enter a whole number. It must 
then check if the number is perfectly divisible by 2. If it is, the program should 
display that the number is even; otherwise, it should display that the number is odd. 
The program should handle both positive and negative integers. 

Pre-requisites: Conditional Statements, Operators.
*/


#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num); 
    if (num % 2 == 0) {
        printf("U entered number %d is even\n", num);
    } else {
        printf("U entered number %d is odd\n", num);
    }
    return 0;
}

/*
Role in Embedded C:
Conditional statements and operators are widely used in
Embedded C programming for decision making and hardware control.
They help in checking sensor values, controlling LEDs,
handling switches, and monitoring system conditions.
*/