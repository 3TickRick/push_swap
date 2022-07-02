/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pre_sort.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbrune <rbrune@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/31 10:21:23 by rbrune        #+#    #+#                 */
/*   Updated: 2022/05/30 11:48:02 by rbrune        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_smallest_nb_pos(long *copy_1, t_stack *stacks)
{
	int	i;
	int	ret;

	ret = 0;
	i = 1;
	while (i < stacks->size_a)
	{
		if (copy_1[i] < copy_1[ret])
			ret = i;
		i++;
	}
	return (ret);
}

void	ft_index(long *copy_1, t_stack *stacks)
{
	int	i;
	int	pos;

	pos = 0;
	i = 0;
	while (i < stacks->size_a)
	{
		pos = ft_smallest_nb_pos(copy_1, stacks);
		stacks->stack_a[pos] = i;
		copy_1[pos] = 2147483648;
		i++;
	}
}

void	ft_pre_sort(t_stack *stacks)
{
	long	*copy_1;
	int		i;
	int		j;

	copy_1 = ft_malloc_check((long *)malloc(sizeof(long) * stacks->size_a));
	i = 0;
	while (i < stacks->size_a)
	{
		j = i + 1;
		while (j < stacks->size_a)
		{
			if (stacks->stack_a[j] == stacks->stack_a[i])
				exit(write(2, "Error\n", 6));
			j++;
		}
		copy_1[i] = stacks->stack_a[i];
		i++;
	}
	ft_index(copy_1, stacks);
	free (copy_1);
}
