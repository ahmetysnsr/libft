/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asari <asari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 17:26:05 by asari             #+#    #+#             */
/*   Updated: 2025/06/26 17:26:07 by asari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int a)
{
	return (a >= 32 && a <= 126);
}
