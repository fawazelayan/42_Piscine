/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felayan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 14:38:58 by felayan           #+#    #+#             */
/*   Updated: 2024/07/22 07:51:40 by felayan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int	n = 2;
	int	e = 5;
	int	*p1;
	int	*p2;
	p1 = &n;
        p2 = &e;
	ft_swap(p1, p2);
	printf("%i", n);
	printf("%i", e);
}
*/
