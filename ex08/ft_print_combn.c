/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunglee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:22:25 by sunglee           #+#    #+#             */
/*   Updated: 2021/10/12 20:31:10 by sunglee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	max(int count)
{
	int	m;
	int	a;

	a = 0;
	m = 1;
	while(a <= count)
	{
		m = m * 10;
		a++;
	}
	return(m);
}

void	ft_print_combn(int n)
{
	int		no;
	int		a;
	int 	b;
	char	c[9];

	no = n;
	a = 0;
	while(a <= max(no))
	{
		b = n - 1;
		while (b >= 0)
		{
			c[b] = (a % 10) + '0';
			write (1, &c, 1);
			b--;
		}
		write (1, ", ", 2);
		a++;
	}
}

int	main(void)
{
	ft_print_combn(2);
	return(0);
}

