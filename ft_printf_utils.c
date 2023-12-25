/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltazar <baltazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 16:23:31 by baltazar          #+#    #+#             */
/*   Updated: 2023/12/25 16:23:35 by baltazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int check_argument(va_list args, const char type)
{
    int length = 0;

    // Use a switch statement for cleaner and more readable code
    switch (type)
    {
    case 'c':
        length += ft_putchar_count(va_arg(args, int));
        break;

    case 's':
        length += ft_putstr_count(va_arg(args, char *));
        break;

    case 'p':
        length += ft_putptr_count(va_arg(args, unsigned long long));
        break;

    case 'd':
    case 'i':
        length += ft_putnbr_count(va_arg(args, int));
        break;

    case 'u':
        length += ft_put_unsignedint_count(va_arg(args, unsigned int));
        break;

    case 'x':
    case 'X':
        length += ft_puthex_count(va_arg(args, unsigned int), type);
        break;

    case '%':
        length += ft_putpercent();
        break;

    // Handle unsupported specifiers or unrecognized placeholders
    // default:
    //     ft_putchar('%');
    //     ft_putchar(type);
    //     length += 2;
    //     break;
    }

    return length;
}
