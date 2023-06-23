
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

Stack *ft_createStackWithArg(int argc, char *argv)
{
    Stack   *stack ;

    stack = (Stack*)malloc(sizeof(Stack));
    if (!stack)
        return (NULL);
    stack->maxsize = argc;
    stack->top = argv[0];
    stack->items = argv;
    return (stack);
    
}
