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

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;

	if(nmemb == 0 || size == 0)
		return NULL;
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return NULL;
	ft_memset(ptr, 0, nmemb * size);

	return ((void*) ptr);
}
