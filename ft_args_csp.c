/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args_csp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltazar <baltazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 15:19:23 by baltazar          #+#    #+#             */
/*   Updated: 2023/12/25 15:38:20 by baltazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <unistd.h> // Nao esquecer de incluir a biblioteca para a função write

/* %c: Imprime um caractere */
int ft_putchar_count(int c)
{
    // Usa a função write para imprimir um caractere em stdout
    return (write(1, &c, 1));
}

/* %s: Imprime uma string */
int ft_putstr_count(char *str)
{
    int i;

    i = 0;
    if (str == NULL)
        // Se a string for nula, imprime a string "(null)"
        return (write(1, "(null)", 6));
    
    // Imprime cada caractere da string e conta o número total de caracteres impressos
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    return (i);
}

/* %p: Imprime um ponteiro */
int ft_putptr_count(unsigned long long ptr)
{
    int len;

    len = 0;
    if (ptr == 0)
        // Se o ponteiro for nulo, imprime a string "(nil)"
        len += write(1, "(nil)", 5);
    else
    {
        // Se o ponteiro não for nulo, imprime "0x" seguido da representação hexadecimal
        len += write(1, "0x", 2);
        ft_putptr(ptr); // Chama a função auxiliar para imprimir a parte hexadecimal
        len += ft_ptrlen(ptr);
    }
    return (len);
}

/* Calcula o comprimento de um ponteiro em hexadecimal */
int ft_ptrlen(uintptr_t ptr)
{
    int len;

    len = 1; // Inicia com 1 para incluir o "0x"
    while (ptr != 0)
    {
        len++;
        ptr = ptr / 16;
    }
    return (len);
}

/* Imprime um ponteiro em hexadecimal */
void ft_putptr(uintptr_t ptr)
{
    if (ptr >= 16)
    {
        ft_putptr(ptr / 16);
        ft_putptr(ptr % 16);
    }
    else
    {
        // Converte e imprime o dígito hexadecimal
        if (ptr <= 9)
            ft_putchar_fd((ptr + '0'), 1);
        else
            ft_putchar_fd((ptr - 10 + 'a'), 1);
    }
}