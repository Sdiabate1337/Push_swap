/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiabate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 18:28:09 by sdiabate          #+#    #+#             */
/*   Updated: 2023/06/23 18:28:18 by sdiabate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"
#include <stdlib.h>

int	is_empty(t_Stack *stack)
{
	if (stack->top == -1)
		return (1);
	return (0);
}

int	is_full(t_Stack *stack)
{
	if (stack->top == stack->maxsize - 1)
		return (1);
	return (0);
}

void	push(t_Stack *stack, int item)
{
	if (is_full(stack))
		return ;
	stack->items[++stack->top] = item;
}

int	pop(t_Stack *stack)
{
	if (is_empty(stack))
		return (-1);
	return (stack->items[stack->top--]);
}

int	peek(t_Stack *stack)
{
	if (is_empty(stack))
		return (-1);
	return (stack->items[stack->top]);
}
