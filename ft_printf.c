/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltazar <baltazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 16:20:07 by baltazar          #+#    #+#             */
/*   Updated: 2023/12/25 16:20:58 by baltazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	handle_placeholder(va_list args, char specifier)
{
	int	bytes;

	bytes = 0;
	if (specifier == 'c')
		bytes += ft_putchar_count(va_arg(args, int));
	else if (specifier == 's')
		bytes += ft_putstr_count(va_arg(args, char *));
	else if (specifier == 'd' || specifier == 'i')
		bytes += ft_putnbr_count(va_arg(args, int));
	// Add more cases for other specifiers as needed
	else if (specifier == '%')
		bytes += ft_putpercent_count();
	// Handle unsupported specifier or unrecognized placeholder
	// else
	// {
	//     ft_putchar('%');
	//     ft_putchar(specifier);
	//     bytes += 2;
	// }
	return (bytes);
}

int	ft_printf(const char *input, ...)
{
	int		i;
	int		bytes;
	va_list	args;

	i = 0;
	bytes = 0;
	va_start(args, input);
	while (input[i])
	{
		if (input[i] == '%')
		{
			bytes += handle_placeholder(args, input[i + 1]);
			i++;
		}
		else
			bytes += ft_putchar_count(input[i]);
		i++;
	}
	va_end(args);
	return (bytes);
}