#include "../libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    if (src < dst && src + len > dst)
    {
        while (len > 0)
        {
            len = len - 1;
            ((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
        }
    }
    else
    {
        unsigned char *p1 = (unsigned char *)src;
        unsigned char *p2 = (unsigned char *)dst;

        while (len--)
        {
            *p2 = *p1;
            p1++;
            p2++;
        }
    }
    return (dst);
}