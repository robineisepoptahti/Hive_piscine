#include "../libft.h"

void ft_strclr(char *s)
{
    size_t len;

    len = (size_t)ft_strlen(s);
    ft_memset(s, 0, len);
}
