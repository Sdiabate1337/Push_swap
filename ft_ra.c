/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiabate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 21:44:41 by sdiabate          #+#    #+#             */
/*   Updated: 2023/06/23 21:44:43 by sdiabate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_ra(Stack *stack_a)
{
    int top;
    int i;

    if (!isEmpty(stack_a))
    {
        i =  stack_a->top;
        top = stack_a->items[stack_a->top];
        while (i >= 1)
        {
            stack_a->items[i] = stack_a->items[i - 1];
            i--;
        }
        stack_a->items[0] = top;
    }
}
