
#include "push_swap.h"
/*
check it is zero string
    to avoid these cases:
        * +0 != -0
        * 00 != 000
*/
int ft_isZero(char *arg)
{
    int i;

    i = 0;
    if (arg[i] == '+' || arg[i] == '-')
        i++;
    while (arg[i] && arg[i] == '0')
        i++;
    if (arg[i] != '\0')
        return (0);
    return (1);
}

int ft_hasDuplicate(char *argv[])
{
    int i;
    int j;

    i = 0;
    while (argv[i])
    {
        j = i + 1;
        while (argv[j])
        {
            if (ft_strcmp(argv[i], argv[j]) == 0)
               return (1);
            j++;
        }
        i++;
    }
    return (0);
}

char	**check_string(int *argc, char **argv)
{
	int	i;

	i = 0;
	if (!(argv[0][0]))
		exit(0);
	argv = ft_split(argv[1], ' ');
	while (argv[i] != '\0')
		i++;
	*argc = i ;
	return (argv);
}

int ft_isNum(char *arg)
{
    int i = 0;

    if (arg[i] == '+' || arg[i] == '-')
    {
        if (arg[i + 1] == '\0')
            return 0;
        i++;
    }
    while (arg[i] != '\0')
    {
        if (!isdigit(arg[i]))
            return 0;
        i++;
    }
    return 1;
}


int ft_correctInput(char **argv)
{
    int i;
    int zero;

    i = 0;
    zero = 0;
    while (argv[i])
    {
        if (!ft_isNum(argv[i]))
            return (0);
        zero += ft_isZero(argv[i]);
        i++;
    }
    if (zero > 1)
        return (0);
    if (ft_hasDuplicate(argv))
        return (0);
    return (1);
}