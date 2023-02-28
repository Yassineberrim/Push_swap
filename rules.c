/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 15:24:04 by yberrim           #+#    #+#             */
/*   Updated: 2023/02/28 21:53:54 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void sa(t_stack *stack)
{
    if(stack->stack_a_size >= 1)
    {
        int tmp;
        tmp = stack->stack_a[stack->stack_a_size - 1];
        stack->stack_a[stack->stack_a_size - 1] = stack->stack_a[stack->stack_a_size - 2];
        stack->stack_a[stack->stack_a_size - 2] = tmp;
    }
    printf("sa\n");
}
void sb(t_stack *stack)
{
    if(stack->stack_b_size >= 1)
    {
        int tmp;
        tmp = stack->stack_b[stack->stack_b_size - 1];
        stack->stack_b[stack->stack_b_size - 1] = stack->stack_b[stack->stack_b_size - 2];
        stack->stack_b[stack->stack_b_size - 2] = tmp;
    }
    printf("sb\n");
}

void ss(t_stack *stack)
{
    sa(stack);
    sb(stack);
    printf("ss\n");
}

void pa(t_stack* stacks)
{
    int top_b = stacks->stack_b[stacks->stack_b_size - 1];
    stacks->stack_b_size--;
    stacks->stack_a[stacks->stack_a_size] = top_b;
    stacks->stack_a_size++;
    printf("pa\n");
}

void pb(t_stack* stacks)
{
    int top_a = stacks->stack_a[stacks->stack_a_size - 1];
    stacks->stack_a_size--;
    stacks->stack_b[stacks->stack_b_size] = top_a;
    stacks->stack_b_size++;
    printf("pb\n");
}
// void ppa(t_stack* stack)
// {
//     int top_b = stack->stack_b[stack->b_size - 1];
//     stack->b_size--;
//     stack->stack_a[stack->a_size - 1] = top_b;
//     stack->a_size++; 
// }