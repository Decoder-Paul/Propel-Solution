#include <stdio.h>
#define MAX_SIZE 100
void replace(char * s, char from, char to);

int main()
{
    char str[MAX_SIZE], from, to;

    printf("Enter the string\n");
    scanf("%s",str);

    printf("Enter the character to be replaced");
    scanf("%c", &from);

    printf("Enter the character to be replaced with\n");
    scanf(" %c", &to);

    replace(str, from, to);

    printf("The modified string is %s", str);

    return 0;
}
void replace(char *s, char from, char to)
{
    int i = 0;
    while(s[i] != '\0')
    {
        if(s[i] == from)
        {
            s[i] = to;
        }
        i++;
    }
}
