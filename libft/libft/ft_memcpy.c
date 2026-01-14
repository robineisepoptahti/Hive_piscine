#include "../libft.h"

void *ft_memcpy(void *restrict dst, void *restrict src, size_t n)
{
    unsigned char *p1 = (unsigned char *)src;
    unsigned char *p2 = (unsigned char *)dst;

    while (n--)
    {
        *p2 = *p1;
        p1++;
        p2++;
    }
    return (dst);
}