/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amazurok <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 17:07:16 by amazurok          #+#    #+#             */
/*   Updated: 2017/10/25 15:50:25 by amazurok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int a;

	a = 1;
	while (a * a <= nb && a <= 46340)
	{
		if (a * a == nb)
			return (a);
		a++;
	}
	return (0);
}
