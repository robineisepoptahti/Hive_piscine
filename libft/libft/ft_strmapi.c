#include "../libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
            new_char = f(i, s[i]);
            new_str[i] = new_char;
            i++;
        }
    }
    return (new_str);
}