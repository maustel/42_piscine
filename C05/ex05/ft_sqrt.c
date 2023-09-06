/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 09:33:39 by maustel           #+#    #+#             */
/*   Updated: 2023/08/30 09:55:49 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	y;

	y = 1;
	while (y <= nb && y <= 46340)
	{
		if (y * y == nb)
			return (y);
		y++;
	}
	return (0);
}

// #include <stdio.h>

// int	main()
// {
// 	printf("%d", ft_sqrt(3));

// 	return (0);
// }