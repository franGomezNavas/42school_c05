/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgomez- <frgomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 16:32:23 by frgomez-          #+#    #+#             */
/*   Updated: 2026/03/24 11:26:26 by frgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (nb);
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/*
int main(void)
{
    printf("%d\n", ft_sqrt(9));
    printf("%d\n", ft_sqrt(16));
    printf("%d\n", ft_sqrt(8));
    printf("%d\n", ft_sqrt(0)); 
    printf("%d\n", ft_sqrt(1));
    printf("%d\n", ft_sqrt(-4));
    return (0);
}
*/
