#include "../libft.h"

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
    size_t dest_i;
    size_t src_i;

    src_i = start;
    dest_i = 0;

    char *substr;
    substr = (char *)malloc((sizeof(char) * len) + 1);
    if (!substr)
        return (NULL);
    while (src_i < start + len)
        substr[dest_i++] = s[src_i++];
    substr[dest_i] = '\0';
    return (substr);
}