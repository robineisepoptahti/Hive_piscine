#include "../libft.h"

static int post_loop(const char *s1, const char *s2, size_t n, size_t i)
{
	int answ1;

	answ1 = s1[i] - s2[i];
	if (n <= i)
	{
		return (0);
	}
	else
	{
		return (answ1);
	}
}

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int answ1;
	size_t i;

	i = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0') && (n >= i))
	{
		if (s1[i] == s2[i] || i == n)
		{
			if (s1[i] == '\0' || (i == n))
			{
				return (0);
			}
		}
		else
		{
			answ1 = s1[i] - s2[i];
			return (answ1);
		}
		i++;
	}
	answ1 = post_loop(s1, s2, n, i);
	return (answ1);
}
