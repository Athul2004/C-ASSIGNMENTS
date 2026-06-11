/*
27. Define a structure Complex with real and imaginary parts. Write a C program to add 
two complex numbers and display the result. 

Description: The program should define a structure to represent a complex number 
with two members: real part and imaginary part. It must then create functions to 
perform addition of two complex numbers and to display a complex number in a 
readable format (e.g., a + bi). The program should take input for two complex 
numbers, compute their sum using the defined function, and print the result. 

Pre-requisites: Structures, Functions, Basic Arithmetic Operations, Input/Output 
*/

#include <stdio.h>

// Structure for complex number
struct Complex
{
    float real;
    float imag;
};

// Function to add two complex numbers
struct Complex addComplex(struct Complex c1, struct Complex c2)
{
    struct Complex sum;

    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;

    return sum;
}

// Function to display a complex number
void displayComplex(struct Complex c)
{
    printf("%.2f + %.2fi\n", c.real, c.imag);
}

int main()
{
    struct Complex c1, c2, result;

    printf("Enter real and imaginary part of first complex number: ");
    scanf("%f %f", &c1.real, &c1.imag);

    printf("Enter real and imaginary part of second complex number: ");
    scanf("%f %f", &c2.real, &c2.imag);

    result = addComplex(c1, c2);

    printf("Sum = ");
    displayComplex(result);

    return 0;
}