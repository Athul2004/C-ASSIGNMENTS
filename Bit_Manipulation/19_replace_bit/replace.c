/*
19.  Write a C program that takes a number and replaces n of its bits, starting from a 
given position, with another set of n bits from a second number. 

Description: The program should prompt the user to enter two integers, a starting bit 
position, and the number of bits n to be modified. It must then clear $n$ bits in the 
first number at the specified position and replace them with the corresponding $n$ 
bits from the second number. The final resulting value should be displayed on the 
screen while all other bits in the first number remain unchanged. 

Pre-requisites: Bitwise Operators 
*/

#include <stdio.h>

int main()
{
    int num1, num2, pos, n;
    int mask, bits;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter position: ");
    scanf("%d", &pos);

    printf("Enter number of bits: ");
    scanf("%d", &n);

    mask = ((1 << n) - 1) << pos;

    num1 = num1 & ~mask;

    bits = (num2 & ((1 << n) - 1)) << pos;

    num1 = num1 | bits;

    printf("Result = %d", num1);

    return 0;
}