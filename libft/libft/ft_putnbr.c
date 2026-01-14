#include "../libft.h"

static int conv_int(long int nb, char *src, int i, int j)
{
    char lista[20];
    int rem;

    if (nb < 0)
    {
        src[j++] = '-';
        nb = nb * -1;
    }
    while (nb != 0)
    {
        rem = nb % 10;
        lista[i++] = rem + '0';
        nb = nb / 10;
    }
    while (i-- >= 0)
    {
        src[j++] = lista[i];
    }
    j--;
    return (j);
}

void ft_putnbr(int n)
{
    char src[13];
    int i;
    int j;

    i = 0;
    j = 0;
    if (n == 0)
        src[j++] = '0';
    else
    {
        j = conv_int((long int)n, src, i, j);
    }
    src[j] = '\0';
    write(1, src, j);
}
