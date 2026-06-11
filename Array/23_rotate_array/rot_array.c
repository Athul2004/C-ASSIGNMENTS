/*
23. Write a C program that rotates the elements of an array by n positions in a 
specified direction. 

Description: The program should prompt the user to enter the array elements, the 
number of positions (n) to rotate, and the direction (left or right). It must then shift the 
elements accordingly — elements that fall off one end should reappear at the opposite 
end. The rotation must work for any value of n, including values larger than the array 
size. The final rotated array should be displayed on the screen. 

Pre-requisites: Arrays, Loops, Modulus Operator. 

*/

#include <stdio.h>

int main()
{
    int a[100], n, i, pos;
    char dir;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter positions to rotate: ");
    scanf("%d", &pos);

    printf("Enter direction (L/R): ");
    scanf(" %c", &dir);

    pos = pos % n;

    while(pos--)
    {
        if(dir == 'L' || dir == 'l')
        {
            int temp = a[0];

            for(i = 0; i < n - 1; i++)
                a[i] = a[i + 1];

            a[n - 1] = temp;
        }
        else
        {
            int temp = a[n - 1];

            for(i = n - 1; i > 0; i--)
                a[i] = a[i - 1];

            a[0] = temp;
        }
    }

    printf("Rotated Array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}