#include <stdio.h>

int check_validate(char *s)
{
    int i;

    for (i = 0; s[i] != '\0'; i++)
    {
        if (!(s[i] >= 'A' && s[i] <= 'Z') && !(s[i] >= 'a' && s[i] <= 'z') && !(s[i] >= '0' && s[i] <= '9'))
            return 0;
    }
    return 1;
}

int main(void)
{
    char str[] = "Vaibhav123";

    if (check_validate(str))
        printf("String is valid.\n");
    else
        printf("String is not valid.\n");

    return 0;
}