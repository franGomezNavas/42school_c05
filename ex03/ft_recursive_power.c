/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgomez- <frgomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 13:31:47 by frgomez-          #+#    #+#             */
/*   Updated: 2026/03/24 11:26:06 by frgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <unistd.h>
//#include <stdlib.h>
//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	while (power == 0 || nb == 1)
	{
		return (1);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}

/*
int main(int argc, char **argv)
{
    if(argc == 3)
    {
        printf("%d", ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
    }
    else
    {
        printf("elige otro número");
    }
    return (0);
}
*/
