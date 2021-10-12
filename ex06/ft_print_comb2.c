/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunglee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:38:40 by sunglee           #+#    #+#             */
/*   Updated: 2021/10/12 20:20:59 by sunglee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_print_comb2(void)
{
	int		s;
	int		e;
	char	n[4];

	s = 0;
	while (s <= 99)
	{
		e = s + 1;
		while (e <= 99)
		{
			n[0] = '0' + s / 10;
			n[1] = '0' + s % 10;
			n[2] = '0' + e / 10;
			n[3] = '0' + e % 10;
			write (1, &n, 2);
			write (1, " ", 1);
			write (1, &n[2], 2);
			if (s < 98)
			{
				write (1, ", ", 2);
			}
			e++;
		}
		s++;
	}
}