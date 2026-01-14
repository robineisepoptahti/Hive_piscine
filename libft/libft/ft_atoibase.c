/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwidjesk <rwidjesk@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:01:49 by rwidjesk          #+#    #+#             */
/*   Updated: 2024/07/07 21:33:20 by rwidjesk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int conversion(int value, char *str, int i)
{
    while (str[i] <= '9' && str[i] >= '0')
    {
        value = value * 10 + str[i] - '0';
        i++;
    }
    return (value);
}

int ft_atoibase(char *str)
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