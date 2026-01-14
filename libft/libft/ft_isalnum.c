#include "../libft.h"
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwidjesk <rwidjesk@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 19:33:24 by rwidjesk          #+#    #+#             */
/*   Updated: 2024/07/05 19:13:22 by rwidjesk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int ft_isalnum(int c)
{
	int value = 1;
	if (!((c >= 'A') && (c <= 'Z')) && !((c >= 'a') && (c <= 'z')) && !((c >= '0') && (c <= '9')))
	{
		value = 0;
	}
	return (value);
}