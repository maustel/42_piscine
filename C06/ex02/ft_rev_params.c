/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:04:07 by maustel           #+#    #+#             */
/*   Updated: 2023/08/30 11:22:07 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	a;
	int	i;

	a = argc - 1;
	while (a > 0)
	{
		i = 0;
		while (argv[a][i])
		{
			write (1, &argv[a][i], 1);
			i++;
		}
		write (1, "\n", 1);
		a--;
	}
	return (0);
}
