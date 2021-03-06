/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 09:17:32 by elebouch          #+#    #+#             */
/*   Updated: 2017/12/18 15:12:01 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_abs(int i)
{
	return ((i < 0) ? i * -1 : i);
}

int	ft_labs(long i)
{
	return ((i < 0) ? i * -1 : i);
}
