/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 15:44:05 by yberrim           #+#    #+#             */
/*   Updated: 2023/03/05 21:52:42 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

#include<unistd.h>
#include<stdlib.h>
#include <stdio.h>

int is_sorted(t_stack *stack)
{
    int i = 0;
    
    while (i < stack->stack_a_size - 1)
    {
        if (stack->stack_a[stack->stack_a_size - 1 - i] > stack->stack_a[stack->stack_a_size - 2 - i] )
            return (0);
        i++;
    }
    return (1);
}

void sort_stack(t_stack *stack, int n)
{
    int i = 0, j = 0, temp;
    while (i < n - 1)
    {
        j = 0;
        while (j < n - 1)
        {
            if (stack->stack_a[j] > stack->stack_a[j+1])
            {
                temp = stack->stack_a[j];
                stack->stack_a[j] = stack->stack_a[j+1];
                stack->stack_a[j+1] = temp;
            }
            j++;
        }
        i++;
    }
}

int  *copy_stack(t_stack *stack, int n)
{
    int *tmp_stack;
    tmp_stack = malloc(sizeof(int) * n);
    int i;
    i = 0;
    while(i < stack->stack_a_size)
    {
        tmp_stack[i] = stack->stack_a[i];
        i++;
    }
    return tmp_stack;
}
void sort_3_num(t_stack *stack)
{
    if(is_sorted(stack))
        return;
    if (stack->stack_a_size != 3)
    {
        return;
    }
    if ((stack->stack_a[stack->stack_a_size - 1] > stack->stack_a[stack->stack_a_size - 2] &&
        stack->stack_a[stack->stack_a_size - 1] < stack->stack_a[stack->stack_a_size - 3]))
        sa(stack);
    else if ((stack->stack_a[stack->stack_a_size - 1 ] > stack->stack_a[stack->stack_a_size - 2]) &&
        stack->stack_a[stack->stack_a_size - 3] < stack->stack_a[stack->stack_a_size - 2])
    {
        sa(stack);
        rra(stack);
    }
    else if ((stack->stack_a[stack->stack_a_size - 2] < stack->stack_a[stack->stack_a_size - 3]) &&
        (stack->stack_a[stack->stack_a_size - 2] < stack->stack_a[stack->stack_a_size - 1]))
        ra(stack);
    else if (stack->stack_a[stack->stack_a_size  - 1] < stack->stack_a[stack->stack_a_size - 2] && 
        stack->stack_a[stack->stack_a_size -  1] < stack->stack_a[stack->stack_a_size - 3])
    {
        sa(stack);
        ra(stack);
    }
    else if ((stack->stack_a[stack->stack_a_size - 3] < stack->stack_a[stack->stack_a_size - 2]) && 
        (stack->stack_a[stack->stack_a_size - 3] < stack->stack_a[stack->stack_a_size - 1]))
        rra(stack);
}
int get_min(t_stack *stack)
{
    int min = stack->stack_a[stack->stack_a_size - 1];
    int i = 0;
    while(i < stack->stack_a_size - 1)
    {
        if (stack->stack_a[i] < min)
        {
            min = stack->stack_a[i];
        }
        i++;
    }
    return min;
}

// void sort_4_num(t_stack *stack)
// {
//     if (stack->stack_a_size < 4 || is_sorted(stack))
//         return;
//     int min;
//     min = get_min(stack);
//     int i;
//     i = 0;
//     while (stack->stack_a_size > 3)
//     {
//         while (stack->stack_a[stack->stack_a_size - 1] != min)
//             ra(stack);
//         pb(stack);
//     }
//     sort_3_num(stack);
//     pa(stack);
// }
void sort_5_num(t_stack *stack)
{
    int min;
    int i;
    i = 0;
    while (stack->stack_a_size > 3)
    {
        min = get_min(stack);
        while (stack->stack_a[stack->stack_a_size - 1] != min)  
            ra(stack);
        pb(stack);
    }
    if(!is_sorted(stack))
        sort_3_num(stack);
    pa(stack);
    pa(stack);
}
