/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbrune <rbrune@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/17 11:12:51 by rbrune        #+#    #+#                 */
/*   Updated: 2022/06/02 12:37:31 by rbrune        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(const char *str)
{
	size_t	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

int	main(int argc, char *argv[])
{
	t_stack	stacks;

	if (argc < 2)
		exit(0);
	ft_input_count(&stacks, argv);
	ft_sort(&stacks);
	exit (0);
}
