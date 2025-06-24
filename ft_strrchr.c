/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asari <asari>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 19:14:40 by asari             #+#    #+#             */
/*   Updated: 2025/06/22 19:14:40 by asari            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	n;

	n = (int)ft_strlen(s);
	while (n >= 0)
	{
		if (s[n] == (unsigned char)c)
			return ((char *)(s + n));
		n--;
	}
	return (NULL);
}
