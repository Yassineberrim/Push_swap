/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 14:58:04 by yberrim           #+#    #+#             */
/*   Updated: 2023/02/26 15:41:02 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(int ac, char **av)
{
    int a[5];
    int i;
    int j = 0;
    char **args = av + 1;
    i = ac - 2;
    while(j < 5)
    {
        a[j] = atoi(args[i]);
        i--;
        j++;
    }
    i = 0;
    while(i < 5)
    {
        printf("%d ",a[i]);
        i++;
    }
}