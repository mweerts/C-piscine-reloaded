/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxweert <maxweert@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 23:20:59 by maxweert          #+#    #+#             */
/*   Updated: 2024/10/07 23:22:43 by maxweert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb == 1)
		return (1);
	while (i <= nb / i)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
