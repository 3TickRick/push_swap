/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pb.c                                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbrune <rbrune@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/27 12:01:14 by rbrune        #+#    #+#                 */
/*   Updated: 2022/05/23 18:12:25 by rbrune        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra_silent(t_stack *stacks)
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
		stacks->stack_a[i - 2] = temp[i - 1];
		i--;
	}
	stacks->stack_a[stacks->size_a - 1] = temp[0];
	free (temp);
}

void	rrb_silent(t_stack *stacks)
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
		stacks->stack_b[i - 1] = temp[i - 2];
		i--;
	}
	stacks->stack_b[0] = temp[stacks->size_b - 1];
	free (temp);
}

void	pb(t_stack *stacks)
{
	if (stacks->size_a > 0)
	{
		stacks->size_b++;
		rrb_silent(stacks);
		stacks->stack_b[0] = stacks->stack_a[0];
		ra_silent(stacks);
		stacks->size_a--;
		write(1, "pb\n", 3);
	}
}
