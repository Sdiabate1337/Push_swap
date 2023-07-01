/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiabate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 21:45:42 by sdiabate          #+#    #+#             */
/*   Updated: 2023/06/23 21:45:44 by sdiabate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_sb(Stack *stack_b)
{
    int tmp;

    if (stack_b->top >= 1)
    {
        tmp = stack_b->items[stack_b->top];
         stack_b->items[stack_b->top] = stack_b->items[stack_b->top - 1];
         stack_b->items[stack_b->top - 1] = tmp;
         ft_putstr_fd("sb\n", 1);
    }
}