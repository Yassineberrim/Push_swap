/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:22:30 by yberrim           #+#    #+#             */
/*   Updated: 2023/03/05 21:50:55 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"
#include<unistd.h>
#include<stdlib.h>
#include <stdio.h>

void read_arg(t_stack *stack,char **av, int size)
{
    int i;
    i = size-1;
    int j;
    j = 0;
    stack->stack_a = malloc(sizeof(int) * size);
    stack->stack_b = malloc(sizeof(int) * size);
    while (i>=0)
    {
        stack->stack_a[i] = ft_atoi(av[j]);
        i--;
        j++;
    }
    stack->stack_a_size = size;
    stack->stack_b_size = 0;
}
void printf_stack(t_stack *stack)
{
    int i;
    i = stack->stack_a_size+stack->stack_b_size-1;
    while (i>=0)
    {
        printf("%d:\t%d\t\t|\t%d \n",i,stack->stack_a[i],stack->stack_b[i]);
        i--;
    }
    printf("\n");
}
int main(int ac, char **av)
{
    // if (ac < 2)
    // {
    //     printf("Veuillez entrer des nombres à trier.\n");
    //     return (0);
    // }
    // if (has_not_digit(ac, av)|| check_duplicate(ac, av) || check_max_int(ac, av) || check_min_int(ac, av))
    //     return (1);
    int *cpy;
    t_stack stack;
    read_arg(&stack,av + 1,ac - 1);
    sort_3_num(&stack);
    sort_5_num(&stack);
    //printf_stack(&stack);
}
