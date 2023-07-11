/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvandepu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:41:06 by rvandepu          #+#    #+#             */
/*   Updated: 2023/07/11 17:31:09 by rvandepu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putnbr_base(int nbr, char *base);
/*{
	int	a;
	int	b;

	a = 0;
	while (base[a])
	{
		b = 0;
		while (base[b])
		{
			if (a != b && base[a] == base[b])
				return ;
			b++;
		}
	}
	if (nbr == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			write(1, "-", 1);
		}
		a = nbr % 10 + 48;
		if (nbr / 10 != 0)
			ft_putnbr_base(nbr / 10, base);
		write(1, &a, 1);
	}
}*/

/*int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%s in %s base is:\n", argv[1], argv[2]);
		ft_putnbr_base(atoi(argv[1]), argv[2]);
		write(1, "\n", 1);
	}
	else
		printf("Usage: %s <number> <base>", argv[0]);
}*/
