/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgomez- <frgomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 10:00:55 by frgomez-          #+#    #+#             */
/*   Updated: 2026/03/24 11:25:24 by frgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
//#include <unistd.h>
//#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int	res;

	if (nb < 0)
	{
		return (0);
	}
	res = 1;
	while (nb > 1)
	{
		res = res * nb;
		nb--;
	}
	return (res);
}

/*
int	main(int argc, char **argv)
{
    if (argc == 2)
    {
        printf ("%d\n", ft_iterative_factorial(atoi(argv[1])));
    }
    else
    {
        printf ("usa otro numero\n");
    }
    return (0);
}
*/