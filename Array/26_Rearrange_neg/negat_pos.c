#include <stdio.h>

int main()
{
    int a[100], result[100];
    int n, i, k = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++)
    {
        if(a[i] < 0)
            result[k++] = a[i];
    }

    for(i = 0; i < n; i++)
    {
        if(a[i] >= 0)
            result[k++] = a[i];
    }

    printf("Rearranged Array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", result[i]);

    return 0;
}