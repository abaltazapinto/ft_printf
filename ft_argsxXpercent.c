/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argsxXpercent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltazar <baltazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 16:13:48 by baltazar          #+#    #+#             */
/*   Updated: 2023/12/25 16:13:53 by baltazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <unistd.h>

/* %x or %X: */
int ft_puthex_count(unsigned int n, const char type)
{
    if (n == 0)
        return write(1, "0", 1);

    ft_puthex(n, type);
    return ft_hexlen(n);
}

int ft_hexlen(unsigned int n)
{
    int len = 0;

    while (n != 0)
    {
        n = n / 16;
        len++;
    }
    return len;
}

void ft_puthex(unsigned int n, const char type)
{
    if (n >= 16)
    {
        ft_puthex(n / 16, type);
        ft_puthex(n % 16, type);
    }
    else
    {
        ft_putchar_fd((n <= 9) ? n + '0' : (type == 'x' ? n - 10 + 'a' : n - 10 + 'A'), 1);
    }
}

/* %%: */
int ft_putpercent(void)
{
    return write(1, "%", 1);
}
