/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafcrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 18:48:44 by rafcrist          #+#    #+#             */
/*   Updated: 2026/03/02 14:59:42 by rafcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_is_negative(int n)
{
	char	result;

	result = 'P';
	if (n >= 0)
	{
		write(1, &result, 1);
	}
	else
	{
		result = 'N';
		write(1, &result, 1);
	}
}
