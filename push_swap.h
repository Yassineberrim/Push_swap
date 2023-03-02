/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:22:32 by yberrim           #+#    #+#             */
/*   Updated: 2023/03/02 21:45:19 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<limits.h>
#include<stdlib.h>
typedef struct s_stack 
{
    int* stack_a;
    int* stack_b;
    int stack_a_size;
    int stack_b_size;
}t_stack;


int ft_isdigit(char c);
long int	ft_atoi(const char *str);
int ft_strcmp(char *s1, char *s2);
int check_negative(int ac, char **av);
int check_duplicate(int ac, char **av);
int check_max_int(int ac, char **av);
int check_min_int(int ac, char **av);
int has_not_digit(int ac, char **av);
void ss(t_stack *stack);
void sa(t_stack *stack);
void rb(t_stack *stack);
void sb(t_stack *stack);
void pa(t_stack *stack);
void pb(t_stack* stacks);
void ra(t_stack* stack);
void rr(t_stack *stack);
void rra(t_stack *stack);

#endif 