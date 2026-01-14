#include "../libft.h"

char *ft_strndup(const char *s1, size_t n)
{
    int len;
    char *ptr;
    int i;

    i = 0;
    len = ft_strlen(s1);

    if (len > n)
        len = n;
    ptr = (char *)malloc((len + 1) * sizeof(char));
    if (!ptr)
        return NULL;
    while (s1[i] != '\0' && i < len)
    {
        ptr[i] = s1[i];
        i++;
    }
    ptr[i] = '\0';
    return ptr;
}
