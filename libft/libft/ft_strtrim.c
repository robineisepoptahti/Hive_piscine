#include "../libft.h"

char *ft_strtrim(char const *s)
{
    size_t i;
    size_t start;
    char *newstr;

    i = 0;
    while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
        i++;
    start = i;
    while (s[i] != '\0')
        i++;
    i--;
    while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
        i--;
    i++;
    newstr = ft_strsub(s, (unsigned int)start, i - start);
    return (newstr);
}