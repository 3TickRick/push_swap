/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_parse.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbrune <rbrune@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/17 11:13:59 by rbrune        #+#    #+#                 */
/*   Updated: 2022/06/02 12:45:05 by rbrune        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

void	*ft_malloc_check(void *element)
{
	if (element == NULL)
		exit(1);
	return (element);
}

long	ft_atol(const char *str)
{
	long	value;
	long	neg;

	neg = 1;
	value = 0;
	if (!*str)
		exit(write(2, "Error\n", 6));
	if (*str == '-')
	{
		neg = -1;
		str++;
		if (ft_strlen(str) < 1)
			exit(write(2, "Error\n", 6));
	}
	while (*str)
	{
		if (!ft_isdigit(*str))
			exit(write(2, "Error\n", 6));
		value *= 10;
		value += (*str - '0');
		str++;
	}
	if (value * neg < -2147483648 || value * neg > 2147483647)
		exit(write(2, "Error\n", 6));
	return (value * neg);
}

void	ft_input_count(t_stack *stacks, char *argv[])
{
	int	count;
	int	index;

	index = 0;
	while (argv[index])
		index++;
	index--;
	stacks->stack_a = ft_malloc_check((int *)malloc(sizeof(int) * index));
	stacks->stack_b = ft_malloc_check((int *)malloc(sizeof(int) * index));
	count = 1;
	while (count <= index)
	{
		stacks->stack_a[count - 1] = ft_atol(argv[count]);
		count++;
	}
	stacks->size_a = index;
	stacks->size_b = 0;
	stacks->max_size = index;
	ft_pre_sort(stacks);
}
