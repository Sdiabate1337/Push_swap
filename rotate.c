/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiabate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:02:19 by sdiabate          #+#    #+#             */
/*   Updated: 2023/07/06 12:02:23 by sdiabate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_ra(t_Stack *stack_a)
{
	int	top;
	int	i;

	if (!is_empty(stack_a))
	{
		i = stack_a->top;
		top = stack_a->items[stack_a->top];
		while (i >= 1)
		{
			stack_a->items[i] = stack_a->items[i - 1];
			i--;
		}
		stack_a->items[0] = top;
		ft_putstr_fd("ra\n", 1);
	}
}

void	ft_rb(t_Stack *stack_b)
{
	int	top;
	int	i;

	if (!is_empty(stack_b))
	{
		i = stack_b->top;
		top = stack_b->items[stack_b->top];
		while (i >= 1)
		{
			stack_b->items[i] = stack_b->items[i - 1];
			i--;
		}
		stack_b->items[0] = top;
		ft_putstr_fd("rb\n", 1);
	}
}

void	ft_rr(t_Stack *stack_a, t_Stack *stack_b)
{
	ft_ra(stack_a);
	ft_rb(stack_b);
	ft_putstr_fd("rr\n", 1);
}

void	smart_ra(t_Stack *stack, int min_id)
{
	int	size;
	int	min;

	size = stack->top + 1;
	min = stack->items[min_id];
	if (min_id == stack->top)
		return ;
	while (min != stack->items[stack->top])
	{
		if (min_id > size / 2)
			ft_ra(stack);
		else
			ft_rra(stack);
	}
}
