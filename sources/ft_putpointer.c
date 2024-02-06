/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconceic <aconceic@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:59:07 by aconceic          #+#    #+#             */
/*   Updated: 2024/02/06 13:44:39 by aconceic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	hex_count_digits(unsigned long n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 16;
		len++;
	}
	return (len);
}

int	ft_putpointer(unsigned long ptr)
{
	char	*ptr_str;
	int		res;

	res = hex_count_digits(ptr);
	if (!ptr)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	ft_putstr("0x");
	ptr_str = ft_putnbr_hex(ptr);
	ft_putstr(ptr_str);
	free(ptr_str);
	return (res + 2);
}

/* 
# include <stdio.h>
#include "limits.h"
int main(void)
{
	int *ptr;
	int *ptr2;
	int x;
	int y;
	
	x = 10;
	y = 10;
	
	ptr = &x;
	ptr2 = &y;
	printf("%p\n", ptr);
	printf("%p\n", ptr2);

	ft_printf("%p\n", ptr);
	ft_printf("%p", ptr2);
} */
