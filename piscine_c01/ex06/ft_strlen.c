/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafcrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 16:57:01 by rafcrist          #+#    #+#             */
/*   Updated: 2026/03/03 18:32:36 by rafcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

//int main (void)
//{
//	int size;
//	size = ft_strlen("Oi, qual meu tamanho?");
//	printf("Tamanho: %d", size);
//	return(0);
//}
