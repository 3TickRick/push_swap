/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pa.c                                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbrune <rbrune@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/17 12:38:32 by rbrune        #+#    #+#                 */
/*   Updated: 2022/04/08 11:11:30 by rbrune        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb_silent(t_stack *stacks)
{
	int	*temp;
	int	i;

	i = 0;
	temp = ft_malloc_check((int *)malloc(sizeof(int) * stacks->size_b + 1));
	while (i < stacks->size_b)
	{
		temp[i] = stacks->stack_b[i];
		i++;
	}
	while (i > 1)
	{
		stacks->stack_b[i - 2] = temp[i - 1];
		i--;
	}
	stacks->stack_b[stacks->size_b - 1] = temp[0];
	free (temp);
}

void	rra_silent(t_stack *stacks)
{
	int	*temp;
	int	i;

	i = 0;
	temp = ft_malloc_check((int *)malloc(sizeof(int) * stacks->size_a + 1));
	while (i < stacks->size_a)
	{
		temp[i] = stacks->stack_a[i];
		i++;
	}
	while (i > 1)
	{
		stacks->stack_a[i - 1] = temp[i - 2];
		i--;
	}
	stacks->stack_a[0] = temp[stacks->size_a - 1];
	free (temp);
}

void	pa(t_stack *stacks)
{
	if (stacks->size_b > 0)
	{
		stacks->size_a++;
		rra_silent(stacks);
		stacks->stack_a[0] = stacks->stack_b[0];
		rb_silent(stacks);
		stacks->size_b--;
		write(1, "pa\n", 3);
	}
}
