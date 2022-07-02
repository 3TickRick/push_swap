/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_less_10.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbrune <rbrune@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/31 10:53:31 by rbrune        #+#    #+#                 */
/*   Updated: 2022/06/02 12:54:39 by rbrune        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_smallest_nb_a(t_stack *stacks)
{
	int	i;
	int	ret;

	ret = 0;
	i = 0;
	while (i < stacks->size_a - 1)
	{
		if (stacks->stack_a[i] < stacks->stack_a[i + 1] && \
		stacks->stack_a[i] < stacks->stack_a[ret])
			ret = i;
		i++;
	}
	if (stacks->stack_a[i] < stacks->stack_a[0] && \
		stacks->stack_a[i] < stacks->stack_a[ret])
		ret = i;
	return (ret);
}

void	ft_sort_3(t_stack *stacks)
{
	if (stacks->stack_a[0] > stacks->stack_a[1] && stacks->stack_a[1] > \
	stacks->stack_a[2] && stacks->stack_a[2] < stacks->stack_a[0])
	{
		sa(stacks);
		rra(stacks);
	}
	else if (stacks->stack_a[0] < stacks->stack_a[1] && stacks->stack_a[1] > \
	stacks->stack_a[2] && stacks->stack_a[2] > stacks->stack_a[0])
	{
		sa(stacks);
		ra(stacks);
	}
	else if (stacks->stack_a[0] > stacks->stack_a[1] && stacks->stack_a[1] < \
	stacks->stack_a[2] && stacks->stack_a[2] > stacks->stack_a[0])
		sa(stacks);
	else if (stacks->stack_a[0] < stacks->stack_a[1] && stacks->stack_a[1] > \
	stacks->stack_a[2] && stacks->stack_a[2] < stacks->stack_a[0])
		rra(stacks);
	else if (stacks->stack_a[0] > stacks->stack_a[1] && stacks->stack_a[1] < \
	stacks->stack_a[2] && stacks->stack_a[2] < stacks->stack_a[0])
		ra(stacks);
}

int	ft_is_sorted(t_stack *stacks)
{
	int	i;

	i = 0;
	while (i < stacks->size_a - 1)
	{
		if (stacks->stack_a[i] < stacks->stack_a[i + 1])
			i++;
		else
			return (1);
	}
	return (0);
}

void	ft_sort_less_10(t_stack *stacks)
{
	int	i;

	i = 0;
	while (stacks->size_a > 3 && ft_is_sorted(stacks))
	{
		while (ft_smallest_nb_a(stacks) != 0)
		{
			if (ft_smallest_nb_a(stacks) < (stacks->size_a - 1) / 2)
				ra(stacks);
			else
				rra(stacks);
		}
		pb(stacks);
	}
	if (!(ft_is_sorted(stacks)))
		while (stacks->size_b > 0)
			pa(stacks);
	else
	{
		ft_sort_3(stacks);
		while (stacks->size_b > 0)
			pa(stacks);
	}
}
