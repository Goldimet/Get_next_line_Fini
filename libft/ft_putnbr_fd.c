/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 18:30:04 by agilmet           #+#    #+#             */
/*   Updated: 2018/10/15 19:08:47 by agilmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	lg;

	lg = n;
	if (lg < 0)
	{
		ft_putchar_fd('-', fd);
		lg = -lg;
	}
	if (lg >= 10)
		ft_putnbr_fd(lg / 10, fd);
	ft_putchar_fd((lg % 10) + 48, fd);
}
