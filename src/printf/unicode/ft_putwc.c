/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/23 13:56:41 by elebouch          #+#    #+#             */
/*   Updated: 2018/01/08 11:46:59 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putwc(wchar_t c)
{
	int size;

	size = ft_wclen(c);
	if (size != -1)
	{
		return (write(1, &c, size));
	}
	return (-1);
}
