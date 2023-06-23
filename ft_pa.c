/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiabate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 21:44:15 by sdiabate          #+#    #+#             */
/*   Updated: 2023/06/23 21:44:20 by sdiabate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_pa(Stack *stack_a, Stack *stack_b)
{
    int item;

    if (!isEmpty(stack_b))
    {
        item = pop(stack_b);
        push(stack_a, item);
    }
}
