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

int main(int argc, char *argv[])
{
    Stack   *stack_a;
    Stack   *stack_b;
    int     stack_a_size;

    if (argc < 2)
        return (-1);
    /* check if there are an error then print "error" message
        * check if  certains paramètres ne sont pas des nombres
        * if ne tiennent pas dans un int
        * s’il y a des doublons.
    */
   if (!ft_correctInput(argv))
      ft_error();
    stack_a = ft_createStackWithArg(argc, argv);
    stack_b = ft_newStack(argc);
 
    stack_a_size = stack_a->top + 1;
    if (is_sorted(stack_a))
        return (0);
    if (stack_a_size <= 5)
        ft_simpleSort(stack_a, stack_a_size);
    else
        ft_complexSort(stack_a, stack_a_size);
    //ft_printStack(stack_a);
    //ft_printStack(stack_b);
    

   
return (0);
}
