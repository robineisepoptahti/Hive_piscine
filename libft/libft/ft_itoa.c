#include "../libft.h"

static int conv_int(long int n, char *src, int i, int j)
{
    char lista[20];
    int rem;

    if (n < 0)
    {
        src[j++] = '-';
        n = n * -1;
    }
    while (n != 0)
    {
        rem = n % 10;
        lista[i++] = rem + '0';
        n = n / 10;
    }
    while (i-- >= 0)
    {
        src[j++] = lista[i];
    }
    j--;
    return (j);
}

char *ft_itoa(int n)
{
    char src[13];
    int i;
    int j;
    char *newstr;

    i = 0;
    j = 0;
    if (n == 0)
    {
        src[j++] = '0';
    }
    else
    {
        j = conv_int((long int)n, src, i, j);
    }
    src[j] = '\0';
    newstr = ft_strdup((const char *)src);
    return (newstr);
}