/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilmahjou <ilmahjou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 16:03:33 by ilmahjou          #+#    #+#             */
/*   Updated: 2024/12/03 14:52:55 by ilmahjou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int	ft_print_char(int c);
int	ft_print_str(char *str);
int	ft_print_u(unsigned int u);
int	ft_print_p(size_t	p);
int	ft_print_digit(long nbr, int base, char x_or_X);
int	ft_printf(const char *str, ...);

#endif
