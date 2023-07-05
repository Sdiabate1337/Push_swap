#include "push_swap.h"

int ft_isdigit(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

char    **argv_cpy(char **argv, int *argc)
{
    int i;
    char    **par;

    i = 1;
    par = (char **)malloc(sizeof(char *) * (*argc - 1));
    if (!par)
        return (NULL);
    while (i < *argc + 1)
    {
        par[i - 1] = argv[i];
        i++;
    }
    par[*argc - 1] = NULL;
    *argc = *argc - 1;
    return (par);
}

int ft_atoi(char *str)
{
    long      num;
    int      i;
    int     sign;

    num = 0;
    i = 0;
    sign = 1;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i++] == '-')
            sign *= -1;
        if (str[i] < '0' || str[i] > '9')
            ft_error();
    }
    while (str[i])
    {
        if (str[i] < '0' || str[i] > '9')
            ft_error();
        num = num * 10 + (str[i++] - '0');
    }
    if ((sign == 1 && num > INT_MAX) || (sign == -1 && num > (unsigned int)INT_MAX + 1))
         ft_error();
    return (sign * num);
}

void    ft_error()
{
    ft_putstr_fd("Error\n", 2);
    exit(3);
}

/*
    #include <stdlib.h>

void ft_freeParam(char **param)
{
    int i;
    
    i = 0;
    if (param == NULL) {
        return;
    }
    while (param[i] != NULL) {
        free(param[i]);
        i++;
    }
    free(param);
}
*/
