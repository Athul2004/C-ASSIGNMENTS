/*
4. Write a C program to generate the Fibonacci series up to a given number of terms. 

Description: The program should prompt the user to enter the number of terms (n). It 
should then generate the Fibonacci sequence, where each number is the sum of the 
two preceding ones, starting from 0 and 1. The program must display the sequence up 
to the specified number of terms. 

Pre-requisites: Loops, Variables, Basic Arithmetic Operations 

*/

#include <stdio.h>

int main() {

    int n, i;
    int first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");

    for(i = 1; i <= n; i++) {

        printf("%d ", first);

        next = first + second;
        first = second;
        second = next;

    }

    return 0;

}