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