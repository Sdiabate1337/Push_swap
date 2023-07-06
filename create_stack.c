/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiabate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:39:37 by sdiabate          #+#    #+#             */
/*   Updated: 2023/07/06 12:39:40 by sdiabate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_Stack	*ft_new_stack(int maxsize)
{
	t_Stack	*stack;

	stack = (t_Stack *)malloc(sizeof(t_Stack));
	if (!stack)
		return (NULL);
	stack->maxsize = maxsize + 1;
	stack->top = -1;
	stack->items = (int *)malloc(sizeof(int *) * maxsize);
	return (stack);
}

t_Stack	*ft_create_stack_with_arg(int argc, char **param)
{
	t_Stack	*stack;
	int		i;

	i = argc - 1;
	stack = ft_new_stack(argc - 1);
	while (i >= 0)
	{
		stack->items[++stack->top] = ft_atoi(param[i]);
		i--;
	}
	return (stack);
}
