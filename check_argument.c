/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argument.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 14:09:08 by yberrim           #+#    #+#             */
/*   Updated: 2023/02/25 09:53:27 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

/*naqder nhaydha */
// int check_negative(int ac, char **av)
// {
// 	int i;
// 	i = 1;
// 	while (i < ac)
// 	{
// 		if(ft_strcmp(av[i],"-0") == 0)
// 		{
// 			printf("Erreur : argument %d est inférieur à zéro\n", i);
// 			return 0;
// 		}
// 	}
// 	return 1;
// }


int check_duplicate(int ac, char **av)
{
	int i;
	int j;
	i = 1;
	while (i < ac)
	{
		j = i +1;
		while (j < ac)
		{
			if(ft_strcmp(av[i],av[j]) == 0)
			{
				printf("Erreur : argument %d est dupliqué\n", i);
				return 0;
			}
			j++;
		}
		i++;
	}
	return 0;
}

int check_max_int(int ac, char **av)
{
    int i = 1;
    while (i < ac)
    {
        if (ft_atoi(av[i]) > INT_MAX)
        {
            printf("Erreur : argument %d est supérieur à %d\n", i, INT_MAX);
			return 1;	
	    }
        i++;
    }
	return 0;
}

int check_min_int(int ac, char **av)
{
	int i ;
	i = 1;
	while (i < ac)
	{
		if(ft_atoi(av[i]) < INT_MIN)
		{
			printf("Erreur : argument %d est inferieur à %d\n",i,INT_MIN);
			return 1;
		}
		i++;
	}
	return 0;
}

int has_not_digit(int ac, char **av)
{
    int i = 1;
    while (i < ac)
    {
        if (!ft_isdigit(av[i][0]))
        {
            printf("Veuillez entrer des chiffres entre 0 et 9.\n");
            return 1;
        }
        i++;
    }
    return 0;
}


