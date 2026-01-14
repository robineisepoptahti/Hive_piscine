#include "../libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;
    size_t k;

    i = 0;
    if (needle[0] == '\0')
        return ((char *)haystack);
    while (haystack[i] != '\0' && i < len)
    {
        j = 0;
        k = i;
        while ((haystack[k] == needle[j]) && (k < len))
        {
            if (needle[j] == '\0')
            {
                return ((char *)haystack + i);
            }
            k++;
            j++;
        }
        i++;
    }
    return (NULL);
}
