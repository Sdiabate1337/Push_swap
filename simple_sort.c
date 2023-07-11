/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiabate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:18:04 by sdiabate          #+#    #+#             */
/*   Updated: 2023/07/06 12:18:08 by sdiabate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	find_highest_id(t_Stack *stack)
{
	int	high_id;
	int	high;
	int	i;

	i = 1;
	high_id = 0;
	high = stack->items[0];
	while (i <= stack->top)
	{
		if (high < stack->items[i])
		{
			high = stack->items[i];
			high_id = i;
		}
		i++;
	}
	return (high_id);
}


void	ft_sort_tree(t_Stack **stack)
{
	t_Stack	*s;
	int	high_id;

	s = *stack;
	high_id = 0;
	high_id = find_highest_id(s);
	if (high_id == s->top)
		ft_ra(s);
	else if (high_id == s->top - 1)
		ft_rra(s);
	if (s->items[s->top] > s->items[s->top - 1])
		ft_sa(s);
}

void	ft_simple_sort(t_Stack *stack, t_Stack *stack_b, int size)
{
	if (size <= 1)
		return ;
	if (size == 2)
	{
		ft_sa(stack);
		return ;
	}
	if (size == 3)
		ft_sort_tree(&stack);
	ft_sort_tree_plus(&stack, &stack_b, size);
}

void	ft_sort_tree_plus(t_Stack **stack, t_Stack **stack_b, int size)
{
	int	min_id;

	min_id = 0;
	while (!is_sorted(*stack) && size != 3)
	{
		min_id = find_smallest_id(*stack);
		smart_ra(*stack, min_id);
		ft_pb(*stack_b, *stack);
		size--;
	}
	if (size == 3 && !is_sorted(*stack))
		ft_sort_tree(stack);
	while (!is_empty(*stack_b))
		ft_pa(*stack, *stack_b);
}

int	find_smallest_id(t_Stack *stack)
{
	int	i;
	int	min;
	int	min_index;

	i = 1;
	min_index = 0;
	min = stack->items[0];
	while (i <= stack->top)
	{
		if (min > stack->items[i])
		{
			min = stack->items[i];
			min_index = i;
		}
		i++;
	}
	return (min_index);
}
/*
    void ft_recu_pb(Stack *stack_b, Stack *stack ,int n)
{
    if (n <= 0)
        return ;
    ft_pb(stack_b, stack);
    ft_recu_pb(stack_b, stack, n - 1);
}

*/
