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