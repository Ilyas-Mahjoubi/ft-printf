/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilmahjou <ilmahjou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 21:08:20 by ilmahjou          #+#    #+#             */
/*   Updated: 2024/12/03 15:52:59 by ilmahjou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(int c)
{
	return (write (1, &c, 1));
}

int	ft_print_str(char *str)
{
	int	count;

	count = 0;
	if (str == NULL)
	{
		count += (write(1, "(null)", 6));
		return (count);
	}
	while (*str)
	{
		ft_print_char((int)*str);
		count++;
		str++;
	}
	return (count);
}
