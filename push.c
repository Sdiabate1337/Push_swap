/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiabate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:00:18 by sdiabate          #+#    #+#             */
/*   Updated: 2023/07/06 12:00:27 by sdiabate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_Stack *stack_a, t_Stack *stack_b)
{
	int	item;

	if (!is_empty(stack_b))
	{
		item = pop(stack_b);
		push(stack_a, item);
		ft_putstr_fd("pa\n", 1);
	}
}

void	ft_pb(t_Stack *stack_b, t_Stack *stack_a)
{
	int	item;

	if (!is_empty(stack_a))
	{
		item = pop(stack_a);
		push(stack_b, item);
		ft_putstr_fd("pb\n", 1);
	}
}
