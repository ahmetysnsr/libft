/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asari <asari>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 19:15:42 by asari             #+#    #+#             */
/*   Updated: 2025/06/22 19:15:42 by asari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total_size;

	if (count != 0 && size != 0)
	{
		total_size = count * size;
		if (total_size / size != count)
			return (NULL);
	}
	else
		total_size = 0;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, total_size);
	return (ptr);
}
