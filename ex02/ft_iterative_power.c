/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgomez- <frgomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 12:19:27 by frgomez-          #+#    #+#             */
/*   Updated: 2026/03/24 11:25:54 by frgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	resu;

	if (power < 0)
	{
		return (0);
	}
	resu = 1;
	while (power > 0)
	{
		resu = resu * nb;
		power--;
	}
	return (resu);
}

// int main(void)
// {
//     int base;
//     int potencia;

//     base = 2;
//     potencia = 3;
//     ft_iterative_power(base, potencia);
// }

/*
int main(int argc, char **argv)
{
    if (argc == 3)
    {
        printf("%d\n", ft_iterative_power(atoi(argv[1]),atoi(argv[2])));
    }
    else
    {
        printf("elegimos otro número\n");
    }
    
    return (0);
}
*/
