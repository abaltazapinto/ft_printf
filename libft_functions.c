/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltazar <baltazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 16:31:24 by baltazar          #+#    #+#             */
/*   Updated: 2023/12/25 16:31:28 by baltazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

char *ft_itoa(int n)
{
    char *str;
    int i;

    i = ft_digit_count(n);
    str = malloc(sizeof(char) * (i + 1));
    if (!str)
        return (NULL);

    str[i--] = '\0';
    if (n < 0)
        str[0] = '-';
    else if (n == 0)
        str[0] = '0'; // Use character '0' instead of numeric value 48
    while (n != 0)
    {
        str[i--] = absolute_value(n % 10) + '0';
        n /= 10;
    }
    return (str);
}

int absolute_value(int nbr)
{
    return (nbr < 0 ? -nbr : nbr); // Simplify absolute_value function
}

int ft_digit_count(int nbr)
{
    int count = (nbr <= 0) ? 1 : 0; // Initialize count appropriately

    while (nbr != 0)
    {
        count++;
        nbr /= 10;
    }
    return count;
}
