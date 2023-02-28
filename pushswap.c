/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:22:30 by yberrim           #+#    #+#             */
/*   Updated: 2023/02/28 22:49:08 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"
#include<unistd.h>
#include<stdlib.h>
#include <stdio.h>

/*Le code définit une fonction appelée read_arg 
qui prend en paramètre un pointeur vers une structure t_stack,
un tableau de chaînes de caractères av et un entier size. 
La fonction initialise deux tableaux d'entiers dans la structure 
t_stack appelés stack_a et stack_b avec une taille de size. 
Ensuite, elle parcourt le tableau av et convertit chaque élément 
de chaîne en un entier à l'aide de la fonction ft_atoi,
et affecte l'entier résultant à l'index correspondant de stack_a. 
Enfin, la fonction définit la taille de stack_a à size et définit 
la taille de stack_b à 0*/
void read_arg(t_stack *stack,char **av, int size)
{
    int i;
    i = 0;
    stack->stack_a = malloc(sizeof(int) * size);
    stack->stack_b = malloc(sizeof(int) * size);
    while (size > i)
    {
        stack->stack_a[i] = ft_atoi(av[i]);
        i++;
    }
    stack->stack_a_size = size;
    stack->stack_b_size = 0;
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
    read_arg(&stack,av + 1,ac - 1);
    // sa(&stack);
    // sb(&stack);
    ss(&stack);
    // pb(&stack);
    int i;
    i = 0;
    while (i < stack.stack_a_size)
    {
        printf("%d ",stack.stack_a[i]);
        i++;
    }
    printf("\n");
    i = 0;
    while (i < stack.stack_b_size)
    {
        printf("%d ",stack.stack_b[i]);
        i++;
    }
}
