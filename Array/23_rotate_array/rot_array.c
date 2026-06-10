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