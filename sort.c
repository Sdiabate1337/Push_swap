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

void ft_sort_tree(Stack **stack)
{
    Stack *s = *stack;
    
    if (s->items[s->top] > s->items[s->top - 1] && s->items[s->top] < s->items[0] 
        && s->items[s->top - 1] < s->items[0])
            ft_sa(s);
    if (s->items[s->top - 1] > s->items[0] && s->items[s->top] > s->items[0] 
       && s->items[s->top - 1] < s->items[s->top])
    {
        ft_sa(s);
        ft_rra(s);
    }
    if (s->items[s->top - 1] < s->items[0] && s->items[s->top - 1] < s->items[s->top]
        && s->items[s->top] > s->items[0])
            ft_ra(s);
    if (s->items[s->top - 1] > s->items[0] && s->items[s->top - 1] > s->items[s->top]
        && s->items[s->top] < s->items[0])
    {
        ft_sa(s);
        ft_ra(s);
    }
    if (s->items[s->top - 1] > s->items[0] && s->items[s->top - 1] > s->items[s->top]
        && s->items[s->top] > s->items[0])
            ft_rra(s);
    return ;
}


void    ft_simpleSort(Stack *stack,Stack *stack_b, int size)
{
    if (size <= 1)
        return;
    if (size == 2)
    {
        ft_sa(stack);
        return;
    }
    if (size == 3)
        ft_sort_tree(&stack);
    ft_sort_tree_plus(&stack, &stack_b, size);
}

void    ft_sort_tree_plus(Stack **stack, Stack **stack_b, int size)
{
    int min_id;

    min_id = 0;
    while (!is_sorted(*stack) &&  size != 3 )
    {
            min_id = find_smallest_id(*stack);
            smart_ra(*stack, min_id);
            ft_pb(*stack_b, *stack);
            size--;
    }
    if (size == 3 && !is_sorted(*stack))
            ft_sort_tree(stack);
    while (!isEmpty(*stack_b))
        ft_pa(*stack, *stack_b); 
}

int find_smallest_id(Stack *stack)
{
    int i;
    int min;
    int minIndex;

    i = 1;
    minIndex = 0;
    min = stack->items[0];
    while(i <= stack->top)
    {
        if (min > stack->items[i])
        {
              min = stack->items[i];
              minIndex = i;
        }  
        i++;
    }
    return (minIndex);
}

void    smart_ra(Stack *stack, int min_id)
{
    int size;
    int min;

    size = stack->top + 1;
    min = stack->items[min_id];
    if (min_id == stack->top)
        return ;
    while (min != stack->items[stack->top])
    {
        if (min_id > size / 2)
            ft_ra(stack);
        else
            ft_rra(stack);
    }
}

/*
    void ft_recu_pb(Stack *stack_b, Stack *stack ,int n)
{
    if (n <= 0)
        return ;
    ft_pb(stack_b, stack);
    ft_recu_pb(stack_b, stack, n - 1);
}

*/

void    ft_complexSort(Stack *stack, Stack *stack_b, int size)
{
    int max_num;
    int bit_num;
   
    bit_num = 0;
    max_num = size - 1;
    ft_simplify(&stack, size);
    while ((max_num >> bit_num) != 0)
        bit_num++;
    ft_radixSort(stack, stack_b, bit_num);
   
}

void    ft_radixSort(Stack *stack, Stack *stack_b, int bit_num)
{
    int i;
    int j;
    int num;
    int size;

    i = 0;
    size = stack->top + 1;
    while (i < bit_num)
    {
        j = 0;
        while (j < size)
        {
            num = stack->items[stack->top];
            if (((num >> i) & 1) == 1)
                ft_ra(stack);
            if (((num >> i) & 1) == 0)
                ft_pb(stack_b, stack);
            j++;
        }
        while (!isEmpty(stack_b))
           ft_pa(stack, stack_b);
        i++;
    }
}

void    ft_simplify(Stack **stack, int size)
{
    int    *cpy;
    Stack  *s;
    int     i;

    cpy = (int*)malloc(size * sizeof(int));
    if (!cpy)
        return ;
    s = *stack;
    i = -1;
    while (++i < size)
        cpy[i] = s->items[i];
    ft_insertSort(cpy, size);
    ft_conver2SortId(s->items, cpy, size);
}

void    ft_conver2SortId(int *ar1, int *ar2, int size)
{
    int i;
    int j;

    i = -1;
    while (++i < size)
    {
        j = -1;
        while (++j < size)
        {
            if (ar1[i] == ar2[j])
            {
                ar1[i] = j;
                break ;
            }
        }                                                                                                                                                                                                                                                                           
    }
}

void    ft_insertSort(int *ar, int size)
{
    int i;
    int key;
    int j;

    i = 1;
    while (i < size)
    {
        key = ar[i];
        j = i - 1;
        while (j >= 0 && ar[j] > key)
        {
            ar[j + 1] = ar[j];
            j--;
        }
        ar[j + 1] = key;
        i++;
    }
}