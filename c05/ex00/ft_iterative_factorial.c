/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafcrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 17:13:04 by rafcrist          #+#    #+#             */
/*   Updated: 2026/03/14 21:10:08 by rafcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb >= 1)
	{
			result = result * nb;
			nb--;
	}
	return (result);
}

//#include<stdio.h>
//int	main(void)
//{
//	int	result1;
//	
//	result1 = ft_iterative_factorial(5);
//
//	printf("%d", result1);
//	return (0);
//}
