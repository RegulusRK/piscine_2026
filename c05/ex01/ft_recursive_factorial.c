/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafcrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 18:54:44 by rafcrist          #+#    #+#             */
/*   Updated: 2026/03/14 21:14:40 by rafcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial (nb - 1));
}
//#include<stdio.h>
//int	main(void)
//{
//	int	i = ft_recursive_factorial(10);
//	printf("%d", i);
//	return(0);
//}
