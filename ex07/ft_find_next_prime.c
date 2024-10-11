/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 15:10:06 by jegoh             #+#    #+#             */
/*   Updated: 2023/08/16 14:05:13 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <limits.h>
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
	{
		if (nb == INT_MAX)
			return (nb);
		nb++;
	}
	return (nb);
}
/*
int main() {
    int test_numbers[] = {
		10, 20, 100, 1000, 10000, 2147483645, 2147483647, 2147483646};
    int num_tests = sizeof(test_numbers) / sizeof(test_numbers[0]);

    for (int i = 0; i < num_tests; i++) {
        int current_num = test_numbers[i];
        int next_prime = ft_find_next_prime(current_num);

        printf("Next prime after %d: %d\n", current_num, next_prime);
    }

    return 0;
}
*/
