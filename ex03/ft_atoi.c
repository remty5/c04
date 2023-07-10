/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvandepu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 16:45:15 by rvandepu          #+#    #+#             */
/*   Updated: 2023/07/11 01:08:14 by rvandepu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int				n;
	int				s;
	unsigned int	i;

	n = 0;
	s = 1;
	i = 0;
	while (str[i] == ' ' || ('\t' <= str[i] && str[i] <= '\r'))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s = -s;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
		n = (n * 10) + (str[i++] - '0');
	return (n * s);
}

/*int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("%d\n", atoi(argv[1]));
		printf("%d\n", ft_atoi(argv[1]));
	}
	else
		printf("gib arg\n");
}*/
