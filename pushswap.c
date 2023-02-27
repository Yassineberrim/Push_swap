/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:22:30 by yberrim           #+#    #+#             */
/*   Updated: 2023/02/27 17:37:35 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"
#include<unistd.h>
#include<stdlib.h>
#include <stdio.h>


void push(t_stack *stack, int n)
{
    int *new;
    int i;
    i = 0;
    if (stack->size == 0)
    {
        new = malloc(sizeof(int));
        new[0] = n;
        stack->size++;
        stack->stack = new;
        return;   
    }
    new = malloc(sizeof(int) * stack->size + 1);
    if(!new)
        return;
    while (i < stack->size)
    {
        new[i] = stack->stack[i];
        i++;
    }
    new[i] = n;
    stack->size++;
    free(stack->stack);
    stack->stack = new;
}

void read_arg(t_stack *stack,char **av, int size)
{
    int i;
    i = 0;
    stack->stack = malloc(sizeof(int) * size);
    while (size > i)
    {
        push(stack, ft_atoi(av[i]));
        i++;
    }
    stack->size = size;
}

int main(int ac, char **av)
{
    if (ac < 2)
    {
        printf("Veuillez entrer des nombres à trier.\n");
        return (0);
    }
    
    if (has_not_digit(ac, av)|| check_duplicate(ac, av) || check_max_int(ac, av) || check_min_int(ac, av))
        return (1);
    
    t_stack stack;
    read_arg(&stack,av + 1,ac -1);
    int i;
    i = 0;
    while (i < stack.size)
    {
        printf("%d ",stack.stack[i]);
        i++;
    }
}
