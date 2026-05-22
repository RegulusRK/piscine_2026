/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafcrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 13:12:39 by rafcrist          #+#    #+#             */
/*   Updated: 2026/03/15 20:18:10 by rafcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 1)
		return (1);
	if (index == 0)
		return (0);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*
#include<unistd.h>
void	ft_putnbr(int nb)
{
	long	nbl;

	nbl = nb;
	if (nbl >= 0 && nbl <= 9)
	{
		char	c;
		c = nbl + '0';
		write(1, &c, 1);
		return;
	}
	if (nbl < 0)
	{
		nbl = -nbl;
		write(1, "-", 1);
	}
	if (nbl >= 10)
	{
		ft_putnbr(nbl / 10);
	}
	ft_putnbr(nbl % 10);
}
#include<stdio.h>
int	main(void)
{
	int i = ft_fibonacci(21);
	printf("%d", i);
	ft_putnbr(i);
	return 0;

}
*/
