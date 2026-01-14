#include "../libft.h"

char *ft_strdup(const char *s1)
{
    int len;
    char *ptr;
    int i;

    i = 0;
    len = ft_strlen((char *)s1);

    ptr = (char *)malloc((len + 1) * sizeof(char));
    if (!ptr)
        return NULL;
    while (s1[i] != '\0')
    {
        ptr[i] = s1[i];
        i++;
    }
    ptr[i] = '\0';
    return ptr;
}