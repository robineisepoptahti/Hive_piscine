#include "../libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t src_len;
	size_t dst_len;
	size_t count;

	src_len = 0;
	dst_len = 0;
	count = 0;

	while (dest[dst_len] != '\0' && dst_len < size)
		dst_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (dst_len == size)
	{
		return (size + src_len);
	}

	while ((src[count] != '\0') && (dst_len + count) < (size - 1))
	{
		dest[dst_len + count] = src[count];
		count++;
	}
	dest[dst_len + count] = '\0';
	return (src_len + dst_len);
}