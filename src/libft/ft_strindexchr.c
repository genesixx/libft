/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strindexchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 11:12:19 by elebouch          #+#    #+#             */
/*   Updated: 2017/11/20 14:32:00 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strindexchr(char const *s, char c)
{
	int	i;

	i = -1;
	if (!s)
		return (-2);
	while (s[++i])
		if (s[i] == c)
			return (i);
	return (-1);
}