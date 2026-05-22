/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafcrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 19:05:43 by rafcrist          #+#    #+#             */
/*   Updated: 2026/03/18 19:56:01 by rafcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j] && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
//#include <stdio.h>
//
//char *ft_strstr(char *str, char *to_find);
//
//int main(void)
//{
//    char a[] = "banana";
//    char b[] = "ana";
//
//    char *res = ft_strstr(a, b);
//
//    if (res)
//        printf("%s\n", res);
//    else
//      printf("not found\n");
//
//  return (0);
//}
