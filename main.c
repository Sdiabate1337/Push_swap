/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiabate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 17:57:38 by sdiabate          #+#    #+#             */
/*   Updated: 2023/06/23 17:57:43 by sdiabate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"
#include <stdio.h>

int main(int argc, char **argv)
{
    Stack   *stack_a;
    Stack   *stack_b;
    int     stack_a_size;
     /* check if there are an error then print "error" message
        * check if  certains paramètres ne sont pas des nombres
        * if ne tiennent pas dans un int
        * s’il y a des doublons.
    */;
    if (argc < 2)
        return (-1);
    if (argc == 2)
        argv = check_string(&argc, argv);
    if (!ft_correctInput(argv))
        ft_error();
    stack_a = ft_createStackWithArg(argc, argv);
    stack_b = ft_newStack(argc);
    stack_a_size = stack_a->top + 1;
    if (is_sorted(stack_a))
        return (0);
    if (stack_a_size <= 10)
        ft_simpleSort(stack_a, stack_b, stack_a_size);
    else if (stack_a_size > 10)
        ft_complexSort(stack_a, stack_b, stack_a_size);
    ft_printStack(stack_a);
    
return (0);
}