#include <stdio.h>      // Standard input/output functions

// Function to convert a decimal number to the specified base
void decimalToBase(int num, int base, char result[])
{
    int i = 0;          // Index for storing converted digits
    int remainder;      // Stores remainder after division

    // Special case when the input number is 0
    if (num == 0)
    {
        result[i++] = '0';  // Store character '0'
        result[i] = '\0';   // Null terminate the string
        return;             // Exit the function
    }

    // Repeated division method
    while (num > 0)
    {
        remainder = num % base; // Extract remainder

        // Convert remainder to corresponding character
        if (remainder < 10)
            result[i++] = remainder + '0';   // Convert 0-9 to ASCII digit
        else
            result[i++] = remainder - 10 + 'A'; // Convert 10-15 to A-F

        num = num / base; // Remove processed digit
    }

    // Add string terminator
    result[i] = '\0';

    // Reverse the string because remainders are generated in reverse order
    int start = 0;
    int end = i - 1;
    char temp;

    while (start < end)
    {
        // Swap characters
        temp = result[start];
        result[start] = result[end];
        result[end] = temp;

        start++;
        end--;
    }
}

int main()
{
    int decimal;            // Stores input decimal number
    int base;               // Stores target base
    char converted[50];     // Array to hold converted result

    // Read decimal number from user
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // Read target base from user
    printf("Enter target base (2-16): ");
    scanf("%d", &base);

    // Validate base range
    if (base < 2 || base > 16)
    {
        printf("Invalid base! Please enter a base between 2 and 16.\n");
        return 1;   // Terminate program with error code
    }

    // Call function to perform conversion
    decimalToBase(decimal, base, converted);

    // Display converted value
    printf("Equivalent value in base %d = %s\n", base, converted);

    return 0;   // Successful program termination
}