/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgama <mgama@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 16:19:55 by mgama             #+#    #+#             */
/*   Updated: 2022/11/08 19:40:52 by mgama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	n;
	int	d;

	n = nb;
	d = 2;
	if (n < 0)
		return (0);
	if (n == 0 || n == 1)
		return (0);
	if (n == 2)
		return (1);
	while (d < n && d < 46341)
	{
		if (nb % d == 0)
			return (0);
		d++;
	}
	return (1);
}
