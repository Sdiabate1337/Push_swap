#include "push_swap.h"

int is_sorted(Stack *stack)
{
    int i;

    i = stack->top;
    if (isEmpty(stack))
        return (1);
    while (i > 0)
    {
        if (stack->items[i] > stack->items[i - 1])
            return (0);
        i--;
    }
    return (1);
}

void    ft_simpleSort(Stack *stack, int size)
{
       printf("simple");
}

void    ft_complexSort(Stack *stack, int size)
{
    printf("complex");
}