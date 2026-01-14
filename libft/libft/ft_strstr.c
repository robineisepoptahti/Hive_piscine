#include "../libft.h"

char *ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;
	int k;
	const char *dest;

	i = 0;
	if (needle[0] == '\0')
	{
		return ((char *)haystack);
	}
	while (haystack[i] != '\0')
	{
		dest = haystack + i;
		j = 0;
		k = i;
		while (haystack[k++] == needle[j++])
		{
			if (needle[j] == '\0')
			{
				return ((char *)dest);
			}
		}
		i++;
	}
	return (NULL);
}
