/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 19:46:32 by ekrebs            #+#    #+#             */
/*   Updated: 2024/07/03 14:57:07 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int	ft_flag_d(int d, int *error)
{
	int		total_written;
	char	*number;

	number = ft_printf_itoa((long int) d, error);
	if (*error)
		return (*error);
	total_written = ft_putstr(number, error);
	free(number);
	return (total_written);
}
