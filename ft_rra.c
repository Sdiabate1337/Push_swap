/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiabate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 21:45:26 by sdiabate          #+#    #+#             */
/*   Updated: 2023/06/23 21:45:28 by sdiabate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_rra(Stack *stack_a)
{
    int bottom;
    int i;

    if (!isEmpty(stack_a))
    {
        bottom = stack_a->items[0];
        i = 0;
        while (i < stack_a->top)
        {
            stack_a->items[i] = stack_a->items[i + 1];
            i++;
        }
        stack_a->items[stack_a->top] = bottom;
        ft_putstr_fd("rra\n", 1);
    }
}
