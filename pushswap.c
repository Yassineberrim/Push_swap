/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:22:30 by yberrim           #+#    #+#             */
/*   Updated: 2023/02/26 14:57:53 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"
#include<unistd.h>
#include<stdlib.h>
#include <stdio.h>


void push(t_stack *stack_a)


int main(int ac, char **av)
{
    if (ac < 2)
    {
        printf("Veuillez entrer des nombres à trier.\n");
        return (0);
    }

    if (has_not_digit(ac, av)|| check_duplicate(ac, av) || check_max_int(ac, av) || check_min_int(ac, av))
        return (1);
    t_stack *stack_a;
    stack_a = NULL;
    t_stack *tmp;

    int i = ac - 1;
    while (i)
    {
        push(&stack_a, ft_atoi(av[i]));
        i--;
    }

    tmp = stack_a;
    while (tmp)
    {
        printf("%d\n", tmp->value);
        tmp = tmp->next;
    }

    return (0);
}
