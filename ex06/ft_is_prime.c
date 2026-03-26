/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgomez- <frgomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 10:42:28 by frgomez-          #+#    #+#             */
/*   Updated: 2026/03/26 10:43:08 by frgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>

int     ft_is_prime(int nb)
{
    int i;

    if (nb <= 1)
        return (0);
    i = 2;
    while (i < nb)
    {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int main(void)
{
    int i;

    i = 1;
    while (i <= 100)
    {
        if (ft_is_prime(i))
            printf("%d\n", i);
        i++;
    }
    return (0);
}