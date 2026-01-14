#include "../libft.h"

void *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
    int i;

    unsigned char letter = c;
    unsigned char *dst1 = (unsigned char *)dst;
    unsigned char *src1 = (unsigned char *)src;
    i = 0;
    while (n > 0)
    {
        dst1[i] = src1[i];
        if (src1[i] == letter)
        {
            i++;
            return (dst1 + i);
        }
        n--;
        i++;
    }
    return (NULL);
}