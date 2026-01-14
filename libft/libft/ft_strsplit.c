#include "../libft.h"

static size_t ft_wordcount(char const *s, char c)
{
    size_t i;
    size_t count;

    i = 0;
    count = 0;
    while (s[i] != '\0')
    {
        while (s[i] == c && s[i] != '\0')
            i++;
        while (s[i] != c && s[i] != '\0')
            i++;
        if (s[i - 1] != c)
            count++;
    }
    return (count);
}

char **ft_strsplit(char const *s, char c)
{
    size_t i;
    size_t list_i;
    size_t start;
    char **strlist;

    i = 0;
    list_i = 0;
    start = 0;
    strlist = (char **)malloc(sizeof(char *) * ft_wordcount(s, c) + 1);
    if (!strlist)
        return (NULL);
    while (s[i] != '\0')
    {
        while (s[i] == c && s[i] != '\0')
            i++;
        start = i;
        while (s[i] != c && s[i] != '\0')
            i++;
        if ((i - start) > 0)
        {
            strlist[list_i++] = ft_strsub(s, (unsigned int)start, i - start);
        }
    }
    strlist[list_i] = NULL;
    return (strlist);
}