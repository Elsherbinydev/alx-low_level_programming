#include "main.h"
/**
 * cap_string - function that capitalizes first character
 * @str: string to capitalize
 * Return: returns the capitalized string
 */
char *cap_string(char *str)
{
    int index = 0;

    while (str[index])
    {
        if (index == 0 || str[index - 1] == ' ' || str[index - 1] == '\t' ||
            str[index - 1] == '\n' || str[index - 1] == ',' || str[index - 1] == ';' ||
            str[index - 1] == '.' || str[index - 1] == '!' || str[index - 1] == '?' ||
            str[index - 1] == '"' || str[index - 1] == '(' || str[index - 1] == ')' ||
            str[index - 1] == '{' || str[index - 1] == '}')
        {
            if (str[index] >= 'a' && str[index] <= 'z')
                str[index] -= 32;
        }
        index++;
    }
    return (str);
}
