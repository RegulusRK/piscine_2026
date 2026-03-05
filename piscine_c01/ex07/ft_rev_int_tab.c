/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafcrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 18:36:48 by rafcrist          #+#    #+#             */
/*   Updated: 2026/03/03 20:06:16 by rafcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	end;
	int	start;
	int	temp;	

	start = 0;
	end = size - 1;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}
//int main (void)
//{
//	int	i;
//	int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//	ft_rev_int_tab(numbers, 9);
//	
//	i = 0;
//	while ( i < 9 )
//	{
//		printf("%d", numbers[i]);
//		i++;
//	}
//	return(0);
//}
