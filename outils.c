/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   outils.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 10:36:09 by yberrim           #+#    #+#             */
/*   Updated: 2023/03/03 17:12:20 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_swap(int *a,int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
int ft_isdigit(char c)
{
    if (c >= '0' && c <= '9')
        return 1;
    return 0;
}
long int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long int	nb;

	nb = 0;
	sign = 1;
	i = 0;
	if (!(str[i]))
		return (0);
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
		nb = (nb * 10) + (str[i++] - '0');
	return (nb * sign);
}

int ft_strcmp(char *s1, char *s2)
{
	int i;
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}