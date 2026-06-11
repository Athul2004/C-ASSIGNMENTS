/*
7. Write a C program that uses a function to count the frequency of each digit (0–9) 
in a given integer. 

Description: The program should prompt the user to enter an integer. A separate 
function must be written that takes the number, extracts each digit using a loop, and 
updates a frequency array accordingly. The function should not return a single value 
but instead update the array directly. The main function should then print how many 
times each digit appears in the number. 

Pre-requisites: Functions, Arrays, Loops, Pass by Reference (Pointers).
*/

#include <stdio.h>

void countFrequency(long long num, int freq[])
{
    if (num < 0)
        num = -num;   // Handle negative numbers

    if (num == 0)
    {
        freq[0]++;
        return;
    }

    while (num > 0)
    {
        int digit = num % 10;  // Extract last digit
        freq[digit]++;         // Increase frequency
        num = num / 10;        // Remove last digit
    }
}

int main()
{
    long long num;
    int freq[10] = {0};

    printf("Enter an integer: ");
    scanf("%lld", &num);

    countFrequency(num, freq);

    printf("\nDigit Frequencies:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Digit %d = %d times\n", i, freq[i]);
    }

    return 0;
}