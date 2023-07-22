/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiabate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:26:05 by sdiabate          #+#    #+#             */
/*   Updated: 2023/07/06 12:26:15 by sdiabate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	size_t	size;
	int		i;

	i = 0;
	size = ft_strlen((const char *)src);
	dest = (char *)malloc(sizeof(char) * size + 1);
	if (!dest || !size)
		return (0);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[size] = '\0';
	return (dest);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}
/*

void	ft_printStack(Stack* stack)
{
    int i;

    i = stack->top;
    printf("size : %d \n",  stack->top + 1);
    if (isEmpty(stack))
    {
        printf("Stack is empty.\n");
        return ;
    }
    printf("Stack elements:\n");
    while (i >= 0)
    {
        printf("%d: %d\n", i , stack->items[i]);
        i--;
    }
}

void	print2D(char **par)
{
	int	i;
    int j;

    i = 0;
    while (par[i])
    {
        j = 0;
        printf("%d: ", i);
        while (par[i][j])
        {
            printf(" %c", par[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}
*/
