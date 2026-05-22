/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafcrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 19:29:23 by rafcrist          #+#    #+#             */
/*   Updated: 2026/03/16 20:41:15 by rafcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (nb == 0 && power == 0)
		return (result);
	if (power < 0)
		return (0);
	while (power >= 1)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

//#include<stdio.h>
//int	main(void)
//{
//	int	i = ft_iterative_power(5, 6);
//	printf("%d", i);
//	return (0);
//}
