/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunglee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:22:25 by sunglee           #+#    #+#             */
/*   Updated: 2021/10/14 12:15:18 by sunglee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char	*nums, int n)
{
	if (nums[0] == 10 - n + '0')
		write(1, nums, n);
	else
		write(1, nums, n + 2);
}

void	comb(int n, int	count, char	*nums)
{
	int	index;

	if (count == n)
	{
		print(nums, n);
		return ;
	}
	index = 0;
	while (index < 10)
	{
		if (count == 0 || nums[count - 1] < index + '0')
		{
			nums[count] = index + '0';
			comb(n, count + 1, nums);
		}
		index++;
	}
}

void	ft_print_combn(int	n)
{
	char	nums[11];

	nums[n] = ',';
	nums[n + 1] = ' ';
	comb(n, 0, nums);
}
