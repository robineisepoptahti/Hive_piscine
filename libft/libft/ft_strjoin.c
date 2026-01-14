#include "../libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *newstr;
    char *fullstr;

    newstr = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
    if (!newstr)
        return (NULL);
    ft_strcpy(newstr, s1);
    fullstr = ft_strcat(newstr, s2);
    return (fullstr);
}