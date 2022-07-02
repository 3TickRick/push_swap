/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbrune <rbrune@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/17 12:14:02 by rbrune        #+#    #+#                 */
/*   Updated: 2022/01/31 11:21:22 by rbrune        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stacks)
{
	int	temp;

	temp = 0;
	if (stacks->size_a > 1)
	{
		temp = stacks->stack_a[0];
		stacks->stack_a[0] = stacks->stack_a[1];
		stacks->stack_a[1] = temp;
	}
	write(1, "sa\n", 3);
}

void	sb(t_stack *stacks)
{
	int	temp;

	temp = 0;
	if (stacks->size_b > 1)
	{
		temp = stacks->stack_b[0];
		stacks->stack_b[0] = stacks->stack_b[1];
		stacks->stack_b[1] = temp;
	}
	write(1, "sb\n", 3);
}

void	ss(t_stack *stacks)
{
	sa(stacks);
	sb(stacks);
	write(1, "ss\n", 3);
}
