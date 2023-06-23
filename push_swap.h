/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiabate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 16:38:14 by sdiabate          #+#    #+#             */
/*   Updated: 2023/06/23 16:39:01 by sdiabate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H
#include <stdlib.h>
typedef struct
{
    int maxsize;
    int top;
    int *items;
}   Stack;

Stack* ft_newStack(int maxsize);
Stack *ft_createStackWithArg(int argc, char *argv);
void  push(Stack *stack, int item);
int isEmpty(Stack *stack);
int pop(Stack *stack);
int isFull(Stack *stack);
void    ft_sb(Stack *stack_b);
void    ft_sa(Stack *stack_a);


#endif