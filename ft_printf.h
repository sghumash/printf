/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghumash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:31:14 by sghumash          #+#    #+#             */
/*   Updated: 2023/02/16 18:23:43 by sghumash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
int		ft_formats(va_list args, const char format);
int		ft_printchar(int c);
int		ft_printstr(char *str);
int		ft_printptr(unsigned long long ptr);
int		ft_printnbr(int n);
int		ft_printunsigned(unsigned int n);
int		ft_printhex(unsigned int num, const char format);
int		ft_printpercent(void);
void	ft_putstr(char *str);
void	ft_putptr(uintptr_t num);
int		ft_ptrlen(uintptr_t num);
char	*ft_uitoa(unsigned int num);
void	ft_puthex(unsigned int num, const char format);
int		ft_numlen(unsigned int num);
int		ft_hexlen(unsigned int num);
void	ft_putchar_fd(char c, int fd);
char	*ft_itoa(int n);

#endif
