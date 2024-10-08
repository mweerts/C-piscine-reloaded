/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxweert <maxweert@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 23:44:51 by maxweert          #+#    #+#             */
/*   Updated: 2024/10/08 13:25:37 by maxweert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ret;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	ret = malloc(sizeof(int) * (max - min));
	if (!ret)
		return (0);
	while (min + i < max)
	{
		ret[i] = min + i;
		i++;
	}
	return (ret);
}
