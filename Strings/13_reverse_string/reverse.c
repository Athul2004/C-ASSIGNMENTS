// This same code was asked in my interview at a company :)

/*
13. Write a C program that takes a string from the user and reverses its characters using 
an iterative approach. 

Description: The program should prompt the user to enter a sequence of characters. It 
must then swap or move the characters within the string using a loop until the entire 
string is reversed. The final resulting string should be displayed on the screen. 

Pre-requisites: Loops, Strings. Operators.
*/


#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];
    int i, len;
    char temp;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    for(i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    printf("Reversed String = %s", str);

    return 0;
}


