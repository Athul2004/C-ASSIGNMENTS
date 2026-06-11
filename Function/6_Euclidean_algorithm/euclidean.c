/*
6. Write a C program that uses a recursive function to find the GCD of two 
numbers using the Euclidean algorithm. 

Description: The program should prompt the user to enter two positive integers. A 
recursive function must be written that repeatedly applies the Euclidean method  
replacing the larger number with the remainder of dividing the two until the 
remainder is zero. The GCD should be returned to the main function and displayed on 
the screen. 

Pre-requisites: Functions, Recursion, Modulus Operator. 
*/


#include <stdio.h>

//Recursive function
int gcd(int a, int b) {


    //base condition
    if(b == 0) {
        return a;
    }

    //recursive call
    return gcd(b, a % b);

}

int main() {

    int num1, num2, result;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);


    //function call
    result = gcd(num1, num2);

    printf("GCD of %d and %d = %d\n", num1, num2, result);

    return 0;
}