/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_long_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkane <mkane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 19:38:00 by mkane             #+#    #+#             */
/*   Updated: 2024/03/21 18:41:13 by mkane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

long long	ft_long_atoi(const char *nptr)
{
	long long	char_to_int;
	int			sign;

	sign = 1;
	char_to_int = 0;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == 32)
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		if (*(nptr + 1) == '+' || *(nptr + 1) == '-')
			return (-2147483650);
		nptr++;
	}
	if (!*nptr)
		return (-2147483650);
	while ((*nptr >= '0' && *nptr <= '9'))
	{
		char_to_int = (char_to_int * 10) + (*nptr - '0');
		nptr++;
	}
	if (char_to_int * sign > 2147483647 || char_to_int * sign < -2147483648)
		return (-2147483650);
	return (sign * char_to_int);
}
