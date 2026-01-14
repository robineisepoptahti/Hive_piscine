#include "../libft.h"

char *ft_strncat(char *dest, const char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int j;
	char *dest1;

	dest1 = dest;
	i = 0;
	j = 0;
	if (nb == 0)
	{
		return (dest);
	}
	while (dest[i] != '\0')
	{
		i++;
	}
	while ((src[j] != '\0') && (nb > j))
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest1);
}
