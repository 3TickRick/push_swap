/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbrune <rbrune@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/25 11:37:03 by rbrune        #+#    #+#                 */
/*   Updated: 2022/07/01 13:57:41 by rbrune        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_calc_max_bit(int size)
{
	int	max_bit;

	max_bit = 0;
	while (((size) >> max_bit) != 0)
		max_bit++;
	return (max_bit - 1);
}

void	ft_radix_sort(t_stack *stacks)
{
	const int	max_bit = ft_calc_max_bit(stacks->size_a);
	int			i;
	int			j;
	int			k;

	i = 0;
	while (i <= max_bit)
	{
		j = 0;
		k = 0;
		while (j < stacks->max_size)
		{
			if (((stacks->stack_a[0] >> i) & 1) == 1)
				ra(stacks);
			else
				pb(stacks);
			j++;
		}
		while (k < stacks->max_size)
		{
			pa(stacks);
			k++;
		}
		i++;
	}
}

void	ft_sort(t_stack *stacks)
{
	if (stacks->size_a == 2)
	{
		if (ft_is_sorted(stacks))
			sa(stacks);
	}
	if (stacks->size_a <= 10)
		ft_sort_less_10(stacks);
	else
		ft_radix_sort(stacks);
}
