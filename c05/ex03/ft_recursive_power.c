/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafcrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 19:38:38 by rafcrist          #+#    #+#             */
/*   Updated: 2026/03/14 21:06:57 by rafcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (result);
	return (nb * ft_recursive_power(nb, power - 1));
}

//#include<stdio.h>
//int	main(void)
//{
//	int	i = ft_recursive_power(5, 5);
//	printf("%d", i);
//	return 0;
//}
