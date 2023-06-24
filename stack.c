/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiabate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 18:28:09 by sdiabate          #+#    #+#             */
/*   Updated: 2023/06/23 18:28:18 by sdiabate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"
#include <stdlib.h>

int isEmpty(Stack *stack)
{
    if (stack->top == -1)
        return (1);
    return (0);
}

int isFull(Stack *stack)
{
    if (stack->top == stack->maxsize - 1)
        return(1);
    return (0);
}

void  push(Stack *stack, int item)
{
    if (isFull(stack))
        return ;
    stack->items[++stack->top] = item;
}

int pop(Stack *stack)
{
    if (isEmpty(stack))
        return (-1);
    return stack->items[stack->top--];
}

int peek(Stack *stack)
{
    if (isEmpty(stack))
        return (-1);
    return stack->items[stack->top];
}
