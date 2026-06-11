/*
15.  Write a C program that takes a string from the user and replaces every sequence of 
multiple consecutive spaces with a single space. 

Description: The program should prompt the user to enter a sentence that may 
contain several spaces between words. It must then process the string to ensure that 
any instance where two or more blank spaces appear together is reduced to just one 
blank space. The final cleaned string should be displayed on the screen. 

Pre-requisites:  Loops, Strings, Conditional Statements, ASCII, Operators 
*/

#include <stdio.h>

int main()
{
    char str[200], result[200];
    int i, j = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ' && str[i + 1] == ' ')
            continue;

        result[j++] = str[i];
    }

    result[j] = '\0';

    printf("Modified String:\n%s", result);

    return 0;
}