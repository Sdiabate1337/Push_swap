#include "push_swap.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (s)
	{
		i = 0;
		while (s[i])
		{
			ft_putchar_fd(s[i], fd);
			i++;
		}
	}
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

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void    ft_error()
{
    ft_putstr_fd("Error\n", 2);
    exit(3);
}

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

/*
    check if argv contain all a number
*/
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

int ft_correctInput(char *argv[])
{
    int i;
    int zero;

    i = 0;
    zero = 0;
    while (argv[++i])
    {
        if (!ft_isNum(argv[i]))
        {
            printf("here : %d\n", ft_isNum(argv[i]));
            return (0);
        }
        zero += ft_isZero(argv[i]);
    }
    if (zero > 1)
        return (0);
    if (ft_hasDuplicate(argv))
        return (0);
    return (1);
}

void ft_printStack(Stack* stack)
{
    int i;

    i = stack->top;
    printf("size : %d \n",  stack->top + 1);
    if (isEmpty(stack))
    {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements:\n");
    while (i >= 0)
    {
        printf("%d: %d\n", i , stack->items[i]);
        i--;
    }
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

char	*ft_strdup(char *src)
{
	char	*dest;
	size_t	size;
	int		i;

	i = 0;
	size = ft_strlen((const char *)src);
	dest = (char *)malloc(sizeof(char) * size + 1);
	if (!dest)
		return (0);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int ft_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

static int	ft_count_word(char const *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s && s[i])
	{
		if (s[i] != c)
		{
			word++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (word);
}

static int	ft_size_word(char const *s, char c, int i)
{
	int	size;

	size = 0;
	while (s[i] != c && s[i])
	{
		size++;
		i++;
	}
	return (size);
}

static void	ft_free(char **strs, int j)
{
	if (!*strs)
	{
		while (j-- > 0)
			free(strs[j]);
		free(strs);
		return ;
	}
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		word;
	char	**strs;
	int		size;
	int		j;

	i = 0;
	j = -1;
	word = ft_count_word(s, c);
	strs = (char **)malloc((word + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	while (++j < word)
	{
		while (s[i] == c)
			i++;
		size = ft_size_word(s, c, i);
		strs[j] = ft_substr(s, i, size);
		ft_free(strs, j);
		i += size;
	}
	strs[j] = 0;
	return (strs);
}

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
        size_t  i;
        size_t  j;
        char    *str;

        if (!s || len < 0)
                return (0);
        if (!*s || start >= ft_strlen(s))
                return (ft_strdup(""));
        if (len > (ft_strlen(s) - start))
                str = malloc(sizeof(char) * (ft_strlen((char *)s) - start + 1));
        else
                str = (char *)malloc(sizeof(char) * (len + 1));
        if (!str)
                return (0);
        i = -1;
        j = 0;
        while (s[++i])
        {
                if (i >= start && j < len)
                        str[j++] = s[i];
        }
        str[j] = 0;
        return (str);
}