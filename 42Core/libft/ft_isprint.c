/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felayan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 01:28:52 by felayan           #+#    #+#             */
/*   Updated: 2024/09/08 21:47:04 by felayan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if ((c >= 0 && c <= 31)
		|| (c >= 127)
		|| (c < 0))
		return (0);
	return (1);
}
/*
#include <stdio.h>
int main()
{
	int i = -1;
	int a = 0;
	while (a <= 129)
	{
		printf("%d: %d\n",i++,ft_isprint(a));
		a++;
	}
}
*/
