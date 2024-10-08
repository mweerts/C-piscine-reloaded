/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxweert <maxweert@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:49:54 by maxweert          #+#    #+#             */
/*   Updated: 2024/10/08 13:22:33 by maxweert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int		i;
	char	c;

	i = 0;
	while (i < 26)
	{
		c = 'a' + i;
		ft_putchar(c);
		i++;
	}
}
