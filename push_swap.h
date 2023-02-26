/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:22:32 by yberrim           #+#    #+#             */
/*   Updated: 2023/02/25 12:46:10 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<limits.h>

int ft_isdigit(char c);
long int	ft_atoi(const char *str);
int ft_strcmp(char *s1, char *s2);
int check_negative(int ac, char **av);
int check_duplicate(int ac, char **av);
int check_max_int(int ac, char **av);
int check_min_int(int ac, char **av);
int has_not_digit(int ac, char **av);
typedef struct s_stack 
{
    int value;
    struct s_stack *next;
}t_stack;

#endif 