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
#include <string.h>
 #include <ctype.h>
 #include <unistd.h>
 #include <stdio.h>
 #include <limits.h>
typedef struct
{
    int maxsize;
    int top;
    int *items;
}   Stack;

Stack* ft_newStack(int maxsize);
Stack *ft_createStackWithArg(int argc, char *argv[]);
void  push(Stack *stack, int item);
int isEmpty(Stack *stack);
int pop(Stack *stack);
int isFull(Stack *stack);
void    ft_sb(Stack *stack_b);
void    ft_sa(Stack *stack_a);
void    ft_ra(Stack *stack_a);
void    ft_rra(Stack *stack_a);

int ft_hasDuplicate(char *argv[]);
void ft_error();
int ft_isZero(char *arg);
int ft_isNum(char *arg);
int ft_correctInput(char *argv[]);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void ft_printStack(Stack* stack);
int ft_atoi(char *str);

int is_sorted(Stack *stack);
void    ft_simpleSort(Stack *stack, int size);
void    ft_complexSort(Stack *stack, int size);
void    ft_sort_tree_plus(Stack **stack);
void ft_sort_tree(Stack **stack);


#endif