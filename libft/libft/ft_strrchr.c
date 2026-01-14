#include "../libft.h"
#include <string.h>

char *ft_strrchr(const char *s, int c)
{
    int i;
    char *loc;

    loc = NULL;
    i = 0;
    while (s[i])
    {
        if (s[i] == (char)c)
            loc = ((char *)&s[i]);
        i++;
    }
    if (c == '\0')
        return ((char *)&s[i]);
    return (loc);
}
