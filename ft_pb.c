/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiabate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 21:44:26 by sdiabate          #+#    #+#             */
/*   Updated: 2023/06/23 21:44:31 by sdiabate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_pb(Stack *stack_b, Stack *stack_a)
{
    int item;

    if (!isEmpty(stack_a))
    {
        item = pop(stack_a);
        push(stack_b, item);
        ft_putstr_fd("pb\n", 1);
    }
}
