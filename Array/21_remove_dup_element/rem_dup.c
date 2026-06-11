/*
21. Write a C program to remove duplicate elements from a given array. 

Description: The program should prompt the user to enter the size of the array and its 
elements. It must then identify and remove any duplicate values, ensuring that each 
element appears only once in the resulting array. The program should finally display 
the updated array containing only unique elements. 

Pre-requisites: Arrays, Loops, Conditional Statements
*/

#include <stdio.h>

int main()
{
    int a[100], n, i, j, k;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                for(k = j; k < n - 1; k++)
                    a[k] = a[k + 1];

                n--;
                j--;
            }
        }
    }

    printf("Array after removing duplicates:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}