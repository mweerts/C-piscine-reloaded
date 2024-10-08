/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxweert <maxweert@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:59:40 by maxweert          #+#    #+#             */
/*   Updated: 2024/10/08 13:33:59 by maxweert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	ret;

	ret = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (nb > 0)
	{
		ret *= nb;
		nb--;
	}
	return (ret);
}
