/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathhenr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 15:55:41 by mathhenr          #+#    #+#             */
/*   Updated: 2026/03/01 14:30:20 by rafcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c);

void	m_error(void)
{
	write(1, "Erro, digite um número de 0 a 200", 33);
}

void	cond(int x, int y, int line, int column)
{
	if ((line == 1 && column == 1) || (line == y && column == 1))
	{
		ft_putchar('A');
	}
	else if ((line == 1 && column == x) || (line == y && column == x))
	{
		ft_putchar('C');
	}
	else if (line == 1 || line == y || column == 1 || column == x)
	{
		ft_putchar('B');
	}
	else
	
		ft_putchar(' ');
}


void	rush(int x, int y)
{
	int	line;
	int	column;

	line = 1;
	if ((x < 0 || y < 0) || (x > 2147483647 || y > 2147483647))
	{
		m_error();
	}
	else
	{
		while (line <= y)
		{
			column = 1;
			while (column <= x)
			{
				cond(x, y, line, column);
				column++;
			}
				line++;
			ft_putchar('\n');
		}
	}
}
