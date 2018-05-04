/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshiling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 18:01:40 by sshiling          #+#    #+#             */
/*   Updated: 2017/11/01 11:29:01 by sshiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isprint(int c)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	if (c >= 32 && c <= 126)
	{
		if (ch >= 32 && ch <= 126)
			return (1);
	}
	return (0);
}