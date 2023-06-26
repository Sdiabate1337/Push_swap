/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiabate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 21:44:51 by sdiabate          #+#    #+#             */
/*   Updated: 2023/06/23 21:44:55 by sdiabate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_rb(Stack *stack_b)
{
    int top;
    int i;

    if (!isEmpty(stack_b))
    {
        i =  stack_b->top;
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
