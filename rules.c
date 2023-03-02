/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 15:24:04 by yberrim           #+#    #+#             */
/*   Updated: 2023/03/02 21:55:08 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void sa(t_stack *stack)
{
    if(stack->stack_a_size < 2)
        return;
    int tmp;
    tmp = stack->stack_a[stack->stack_a_size - 1];
    stack->stack_a[stack->stack_a_size - 1] = stack->stack_a[stack->stack_a_size - 2];
    stack->stack_a[stack->stack_a_size - 2] = tmp;
    printf("sa\n");
}
void sb(t_stack *stack)
{
    if(stack->stack_b_size < 2)
        return;
    int tmp;
    tmp = stack->stack_b[stack->stack_b_size - 1];
    stack->stack_b[stack->stack_a_size - 1] = stack->stack_b[stack->stack_a_size - 2];
    stack->stack_b[stack->stack_a_size - 2] = tmp;
    printf("sb\n");
}

void ss(t_stack *stack)
{
    sa(stack);
    sb(stack);
    printf("ss\n");
}

void pa(t_stack* stack)
{
    if(stack->stack_b_size == 0)
        return;
    int tmp = stack->stack_b[stack->stack_b_size - 1];
    stack->stack_b[stack->stack_b_size - 1] = 0;
    stack->stack_b_size--;
    stack->stack_a[stack->stack_a_size] = tmp;
    stack->stack_a_size++;
    printf("pa\n");
}
void pb(t_stack* stack)
{
     if(stack->stack_a_size == 0)
        return;
    int tmp = stack->stack_a[stack->stack_a_size - 1];
    stack->stack_a[stack->stack_a_size - 1] = 0;
    stack->stack_a_size--;
    stack->stack_b[stack->stack_b_size] = tmp;
    stack->stack_b_size++;
    printf("pb\n");
}
void ra(t_stack* stack)
{
    if (stack->stack_a_size < 2)
        return;
    int tmp = stack->stack_a[stack->stack_a_size - 1];
    int i = stack->stack_a_size - 1;
    while (i > 0)
    {
        stack->stack_a[i] = stack->stack_a[i-1];
        i--;
    }
    stack->stack_a[0] = tmp;
    printf("ra\n");
}
void rb(t_stack *stack) {
    if (stack->stack_b_size < 2)
        return;
    int tmp = stack->stack_b[stack->stack_b_size - 1];
    int i = stack->stack_b_size - 1;
    while (i > 0)
    {
        stack->stack_b[i] = stack->stack_b[i - 1];
        i--;
    }
    stack->stack_b[0] = tmp;
    printf("rb\n");
}

void rr(t_stack *stack)
{
    ra(stack);
    rb(stack);
    printf("rr\n");
}

void rra(t_stack *stack)
{
    if (stack->stack_a_size < 2)
        return;
    int tmp = stack->stack_a[0];
    int i = 0;
    while (i < stack->stack_a_size - 1)
    {
        stack->stack_a[i] = stack->stack_a[i + 1];
        i++;
    }
    stack->stack_a[stack->stack_a_size - 1] = tmp;
    printf("rra\n");
}

void rrb(t_stack *stack) {
    if (stack->stack_a_size < 2)
        return;
    int tmp = stack->stack_a[0];
    int i = 0;
    while (i < stack->stack_a_size - 1) {
        stack->stack_a[i] = stack->stack_a[i + 1];
        i++;
    }
    stack->stack_a[stack->stack_a_size - 1] = tmp;
    printf("rrb\n");
}

void rrr(t_stack *stack)
{
    rra(stack);
    rrb(stack);
    printf("rrr\n");
}