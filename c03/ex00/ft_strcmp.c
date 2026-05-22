/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafcrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 13:19:16 by rafcrist          #+#    #+#             */
/*   Updated: 2026/03/09 17:59:08 by rafcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}	
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
//
//int main(void)
//{
//	char	s1[] = {"casa"};
//	char	s2[] = {"carro"};
//
//	ft_strcmp(s1, s2);
//	return(0);
//}
