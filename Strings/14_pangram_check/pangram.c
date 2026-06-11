/*
14.  Write a C program that takes a string input from the user and determines whether it is 
a pangram or not. 

Description: The program should prompt the user to enter a sentence or a string of 
characters. It must then verify if every letter of the alphabet from A to Z appears at 
least once within the provided text, regardless of whether the letters are uppercase or 
lowercase. The final output should state if the string is a pangram. 

Pre-requisites: Loops, Strings, Conditional Statements, ASCII, Operators
*/

#include <stdio.h>

int main()
{
    char str[500];
    int alpha[26] = {0};
    int i, flag = 1;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            alpha[str[i] - 'A'] = 1;

        else if(str[i] >= 'a' && str[i] <= 'z')
            alpha[str[i] - 'a'] = 1;
    }

    for(i = 0; i < 26; i++)
    {
        if(alpha[i] == 0)
        {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Pangram");
    else
        printf("Not Pangram");

    return 0;
}