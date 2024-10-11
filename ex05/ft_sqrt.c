/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 19:43:19 by jegoh             #+#    #+#             */
/*   Updated: 2023/08/16 10:52:53 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt(int nb)
{
	double	x0;
	double	x1;
	int		i;
	int		sqrt_nb;

	if (nb <= 0)
		return (0);
	x0 = nb / 2.0;
	i = 0;
	while (i < 100)
	{
		x1 = 0.5 * (x0 + nb / x0);
		if (x0 == x1)
			break ;
		x0 = x1;
		i++;
	}
	sqrt_nb = (int)x0;
	if (sqrt_nb * sqrt_nb == nb)
		return (sqrt_nb);
	else
		return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	int sq = 99980001;
	printf("%d\n", ft_sqrt(sq));
}
*/
