#include <stdio.h>
#include <limits.h>

int main()
{
    int a[100], n, i;
    int largest = INT_MIN, secondLargest = INT_MIN;
    int smallest = INT_MAX, secondSmallest = INT_MAX;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++)
    {
        if(a[i] > largest)
        {
            secondLargest = largest;
            largest = a[i];
        }
        else if(a[i] > secondLargest && a[i] != largest)
        {
            secondLargest = a[i];
        }

        if(a[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = a[i];
        }
        else if(a[i] < secondSmallest && a[i] != smallest)
        {
            secondSmallest = a[i];
        }
    }

    if(secondLargest == INT_MIN || secondSmallest == INT_MAX)
        printf("All elements are same");
    else
    {
        printf("Second Largest = %d\n", secondLargest);
        printf("Second Smallest = %d\n", secondSmallest);
    }

    return 0;
}