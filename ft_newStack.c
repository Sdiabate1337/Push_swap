/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newStack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiabate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 17:03:02 by sdiabate          #+#    #+#             */
/*   Updated: 2023/06/23 17:03:07 by sdiabate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"
#include <stdlib.h>

Stack* ft_newStack(int maxsize)
{
     Stack *stack = (Stack*)malloc(sizeof(Stack));

    if (!stack)
        return (NULL);
    stack->maxsize = maxsize;
    stack->top = -1;
    stack->items = (int*)malloc(sizeof(int) * maxsize);
    return (stack);

}

