
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_createStackWithArg.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiabate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 17:48:59 by sdiabate          #+#    #+#             */
/*   Updated: 2023/06/23 21:43:07 by sdiabate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

Stack *ft_createStackWithArg(int argc, char* argv[])
{
    Stack *stack;
    int i; 
  
    i = argc - 1;
    stack = ft_newStack(argc - 1);
    while (i > 0)
    {
        stack->items[++stack->top] = ft_atoi(argv[i]);
        i--;
    }
    return stack;
}

