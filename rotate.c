
#include "push_swap.h"

void    ft_ra(Stack *stack_a)
{
    int top;
    int i;

    if (!isEmpty(stack_a))
    {
        i =  stack_a->top;
        top = stack_a->items[stack_a->top];
        while (i >= 1)
        {
            stack_a->items[i] = stack_a->items[i - 1];
            i--;
        }
        stack_a->items[0] = top;
        ft_putstr_fd("ra\n", 1);
    }
}

void    ft_rb(Stack *stack_b)
{
    int top;
    int i;

    if (!isEmpty(stack_b))
    {
        i =  stack_b->top;
        top = stack_b->items[stack_b->top];
        while (i >= 1)
        {
            stack_b->items[i] = stack_b->items[i - 1];
            i--;
        }
        stack_b->items[0] = top;
        ft_putstr_fd("rb\n", 1);
    }
}

void    ft_rr(Stack *stack_a, Stack *stack_b)
{
    ft_ra(stack_a);
    ft_rb(stack_b);
    ft_putstr_fd("rr\n", 1);
}