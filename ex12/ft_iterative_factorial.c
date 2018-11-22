/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 14:59:24 by judumay           #+#    #+#             */
/*   Updated: 2018/11/05 14:59:25 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;

	i = nb - 1;
	if (nb == 0)
		return (1);
	if (nb <= 12 && nb >= 1)
	{
		while (i > 1)
			nb = nb * i--;
		return (nb);
	}
	return (0);
}
