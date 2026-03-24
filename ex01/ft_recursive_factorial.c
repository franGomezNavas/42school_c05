/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgomez- <frgomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 11:03:13 by frgomez-          #+#    #+#             */
/*   Updated: 2026/03/24 11:25:42 by frgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <unistd.h>
//#include <stdio.h>
//#include <stdlib.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	return (nb * ft_recursive_factorial(nb - 1));
}

/*
int	main(int argc, char **argv)
{
    if (argc == 2)
    {
        printf("%d\n", ft_recursive_factorial(atoi(argv[1])));
    }
    else
    {
        printf("prueba otro número\n");
    }
    return (0);
}
*/
