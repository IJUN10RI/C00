/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 11:54:00 by msarigul          #+#    #+#             */
/*   Updated: 2022/02/12 12:11:45 by msarigul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (!(a == '7' && b == '8' && c == '9'))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	a ;
	char	b ;
	char	c ;

	a = '0' ;
	while (a <= '7')
	{
		b = a + 1 ;
		while (b <= '8')
		{
			c = b + 1 ;
			while (c <= '9')
			{
				ft_putchar(a, b, c);
					c++;
			}
			b++;
		}
		a++;
	}
}
