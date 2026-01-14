#include "../libft.h"

char *ft_strcpy(char *dest, const char *src)
{
	char *dest1;
	int i;

	i = 0;
	dest1 = dest;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest1);
}
