#include <stdio.h>

int main()
{
    int a[100], n, target;
    int i, j, found = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter target sum: ");
    scanf("%d", &target);

    printf("Pairs are:\n");

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] + a[j] == target)
            {
                printf("(%d, %d)\n", a[i], a[j]);
                found = 1;
            }
        }
    }

    if(!found)
        printf("No pairs found");

    return 0;
}