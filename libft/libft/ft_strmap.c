#include "../libft.h"

char *ft_strmap(char const *s, char (*f)(char))
{
    char *new_str;
    char new_char;
    unsigned int i;

    i = 0;
    new_str = ft_strnew((size_t)strlen(s));
    if (s && f)
    {
        while (s[i] != '\0')
        {
            new_char = f(s[i]);
            new_str[i] = new_char;
            i++;
        }
    }
    return (new_str);
}