#include "../libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    int answ1;
    size_t i;

    const unsigned char *p1 = (const unsigned char *)s1;
    const unsigned char *p2 = (const unsigned char *)s2;

    i = 0;
    while (i < n)
    {
        if (p1[i] == p2[i])
        {
            if (p1[i] == '\0')
            {
                return (0);
            }
        }
        else if (p1[i] != p2[i])
        {
            answ1 = p1[i] - p2[i];
            return (answ1);
        }
        i++;
    }
    return (0);
}