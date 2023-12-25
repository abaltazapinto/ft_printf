/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args_diu.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baltazar <baltazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 16:09:51 by baltazar          #+#    #+#             */
/*   Updated: 2023/12/25 16:09:53 by baltazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libftprintf.h"

/* %d or %i: Imprime um número inteiro com sinal */
int ft_putnbr_count(int n)
{
    int len;
    char *number;

    len = 0;
    number = ft_itoa(n); // Converte o número inteiro para uma string
    if (!number)
        return (0); // Verifica se a conversão foi bem-sucedida
    len = ft_putstr_count(number); // Imprime a string e conta o número de caracteres
    free(number); // Libera a memória alocada para a string
    return (len);
}

/* %u: Imprime um número inteiro sem sinal */
int ft_put_unsignedint_count(unsigned int n)
{
    int len;
    char *number;

    len = 0;
    if (n == 0)
        return (write(1, "0", 1)); // Se n for zero, imprime apenas "0"

    number = ft_uitoa(n); // Converte o número inteiro sem sinal para uma string
    if (!number)
        return (0); // Verifica se a conversão foi bem-sucedida
    len += ft_putstr_count(number); // Imprime a string e conta o número de caracteres
    free(number); // Libera a memória alocada para a string
    return (len);
}

/* Calcula o comprimento de um número inteiro sem sinal */
int ft_numlen(unsigned int n)
{
    int len;

    len = 0;
    while (n != 0)
    {
        n = n / 10;
        len++;
    }
    return (len);
}

/* Converte um número inteiro sem sinal para uma string */
char *ft_uitoa(unsigned int n)
{
    int len;
    char *number;

    len = ft_numlen(n);
    number = malloc(sizeof(char) * (len + 1)); // Aloca memória para a string
    if (!number)
        return (NULL); // Verifica se a alocação de memória foi bem-sucedida

    number[len] = '\0';
    while (n != 0)
    {
        number[len - 1] = n % 10 + '0';
        n = n / 10;
        len--;
    }
    return (number);
}