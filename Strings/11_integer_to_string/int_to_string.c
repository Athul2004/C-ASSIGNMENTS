/*
11. Write a C program that takes an integer from the user and converts it into a 
string of characters. 

Description:The program should prompt the user to enter a whole number. It must 
then process this integer and store each of its digits as characters within a character 
array (string). The resulting string should represent the number exactly as it was 
entered, including a negative sign if the number is less than zero. Finally, the program 
should display the resulting string on the screen. 

Pre-requisites: Strings, Loops, Operators. 
*/

#include <stdio.h>

int main()
{
    int num;
    char str[20];

    printf("Enter an integer: ");
    scanf("%d", &num);

    sprintf(str, "%d", num);

    printf("String = %s", str);

    return 0;
}