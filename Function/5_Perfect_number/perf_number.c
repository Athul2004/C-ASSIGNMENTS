/*
5.  Write a C program that uses a function to check whether a given number is a 
Perfect Number. 

Description: The program should prompt the user to enter a positive integer. A 
separate function must be written that computes the sum of all proper divisors of the 
number (excluding the number itself) and returns whether the sum equals the original 
number. The main function should display whether the number is perfect or not. 
(Example: 6 = 1+2+3, 28 = 1+2+4+7+14) 

Pre-requisites: Functions, Loops, Return Values.
*/

#include <stdio.h>

//Function declaration
int isPerfect(int num);

int main() {

    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    //function call
    if(isPerfect(num)) {
        printf("%d is a perfect integer.\n", num);
    }

    else

    {
        printf("%d is Not a perfect number.\n",num);

    }

    return 0;

}

// Function definition
int isPerfect(int num) {

    int i, sum = 0;

    // Find proper divisors
    for(i = 1; i < num; i++) {

        if(num % i == 0) {
            sum = sum + i;
        }
    }

    //Check perfect number
    if(sum == num) {
        return 1;
    }
    else {
        return 0;
    }

}
