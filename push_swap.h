/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbrune <rbrune@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/17 11:14:17 by rbrune        #+#    #+#                 */
/*   Updated: 2022/06/01 14:01:56 by rbrune        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int	*stack_a;
	int	*stack_b;
	int	size_a;
	int	size_b;
	int	max_size;
}					t_stack;

void	ft_input_count(t_stack *stacks, char *argv[]);
void	*ft_malloc_check(void *str);
void	ft_pre_sort(t_stack *stacks);
void	ft_sort(t_stack *stacks);
void	ft_sort_3(t_stack *stacks);
void	ft_sort_less_10(t_stack *stacks);
int		ft_is_sorted(t_stack *stacks);
int		ft_smallest_nb_a(t_stack *stacks);
void	sa(t_stack *stacks);
void	sb(t_stack *stacks);
void	ss(t_stack *stacks);
void	pa(t_stack *stacks);
void	pb(t_stack *stacks);
void	ra(t_stack *stacks);
void	rb(t_stack *stacks);
void	rr(t_stack *stacks);
void	rra(t_stack *stacks);
void	rrb(t_stack *stacks);
void	rrr(t_stack *stacks);
size_t	ft_strlen(const char *str);
#endif