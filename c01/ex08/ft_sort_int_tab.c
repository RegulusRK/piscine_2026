/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafcrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 20:18:14 by rafcrist          #+#    #+#             */
/*   Updated: 2026/03/04 17:30:03 by rafcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	j;

	i = 0;
	j = size - 1;
	while (j > 0)
	{
		i = 0;
		while (i < j)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		j--;
	}
}

//int main(void)
//{
//    int tab[] = {5, 2, 9, 1, 3};
//    int size = 5;
//    int i = 0;
//
//    ft_sort_int_tab(tab, size);
//
//    while (i < size)
//    {
//        printf("%d ", tab[i]);
//        i++;
//    }
//
//    printf("\n");
//    return 0;
//}
