/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiabate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:24:57 by sdiabate          #+#    #+#             */
/*   Updated: 2023/07/06 12:25:01 by sdiabate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_Stack *stack_a)
{
	int	tmp;

	if (stack_a->top >= 1)
	{
		tmp = stack_a->items[stack_a->top];
		stack_a->items[stack_a->top] = stack_a->items[stack_a->top - 1];
		stack_a->items[stack_a->top - 1] = tmp;
		ft_putstr_fd("sa\n", 1);
	}
}

void	ft_sb(t_Stack *stack_b)
{
	int	tmp;

	if (stack_b->top >= 1)
	{
		tmp = stack_b->items[stack_b->top];
		stack_b->items[stack_b->top] = stack_b->items[stack_b->top - 1];
		stack_b->items[stack_b->top - 1] = tmp;
		ft_putstr_fd("sb\n", 1);
	}
}

void	ft_ss(t_Stack *stack_a, t_Stack *stack_b)
{
	ft_sa(stack_a);
	ft_sa(stack_b);
	ft_putstr_fd("ss\n", 1);
}
