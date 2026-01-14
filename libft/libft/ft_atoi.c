#include "../libft.h"

int ft_atoi(char *str)
{
    int value;
    int i;
    int negative_multiplier;

    i = 0;
    value = 0;
    negative_multiplier = 1;
    while ((str[i] == ' ') || ((str[i] > 8) && (str[i] < 14)))
        i++;
    if ((str[i]) == '-' || (str[i]) == '+')
    {
        if (str[i] == '-')
            negative_multiplier = -1;
        i++;
    }
    while (str[i] <= '9' && str[i] >= '0')
    {
        value = value * 10 + str[i] - '0';
        i++;
    }
    value = value * negative_multiplier;
    return (value);
}
