/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiabate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 21:45:54 by sdiabate          #+#    #+#             */
/*   Updated: 2023/06/23 21:45:57 by sdiabate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_rrb(Stack *stack_b)
{
    int bottom;
    int i;

    if (!isEmpty(stack_b))
    {
        bottom = stack_b->items[0];
        i = 0;
        while (i < stack_b->top)
        {
            stack_b->items[i] = stack_b->items[i + 1];
            i++;
        }
        stack_b->items[stack_b->top] = bottom;
    }
}
