/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rotate.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbrune <rbrune@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/17 14:02:17 by rbrune        #+#    #+#                 */
/*   Updated: 2022/01/31 11:20:57 by rbrune        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *stacks)
{
	int		i;
	int		tmp;

	if (stacks->size_a > 1)
	{
		tmp = stacks->stack_a[0];
		i = 0;
		while (i < stacks->size_a - 1)
		{
			stacks->stack_a[i] = stacks->stack_a[i + 1];
			i++;
		}
		stacks->stack_a[stacks->size_a - 1] = tmp;
	}
	write(1, "ra\n", 3);
}

void	rb(t_stack *stacks)
{
	int		i;
	int		tmp;

	if (stacks->size_b > 1)
	{
		tmp = stacks->stack_b[0];
		i = 0;
		while (i < stacks->size_b - 1)
		{
			stacks->stack_b[i] = stacks->stack_b[i + 1];
			i++;
		}
		stacks->stack_b[stacks->size_b - 1] = tmp;
	}
	write(1, "rb\n", 3);
}

void	rra(t_stack *stacks)
{
	int		i;
	int		tmp;

	if (stacks->size_a > 1)
	{
		tmp = stacks->stack_a[stacks->size_a - 1];
		i = stacks->size_a - 1;
		while (i > 0)
		{
			stacks->stack_a[i] = stacks->stack_a[i - 1];
			i--;
		}
		stacks->stack_a[0] = tmp;
	}
	write(1, "rra\n", 4);
}

void	rrb(t_stack *stacks)
{
	int		i;
	int		tmp;

	if (stacks->size_b > 1)
	{
		tmp = stacks->stack_b[stacks->size_b - 1];
		i = stacks->size_b - 1;
		while (i > 0)
		{
			stacks->stack_b[i] = stacks->stack_b[i - 1];
			i--;
		}
		stacks->stack_b[0] = tmp;
		write(1, "rrb\n", 4);
	}
}

void	rrr(t_stack *stacks)
{
	rra(stacks);
	rrb(stacks);
	write(1, "rrr\n", 4);
}
