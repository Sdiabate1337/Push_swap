/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiabate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 18:51:58 by sdiabate          #+#    #+#             */
/*   Updated: 2023/06/23 21:46:25 by sdiabate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void    ft_sa(Stack *stack_a)
{
    int tmp;


    if (stack_a->top >= 1)
    {
        tmp = stack_a->items[stack_a->top];
         stack_a->items[stack_a->top] = stack_a->items[stack_a->top - 1];
         stack_a->items[stack_a->top - 1] = tmp;
         ft_putstr_fd("sa\n", 1);
    }
}

