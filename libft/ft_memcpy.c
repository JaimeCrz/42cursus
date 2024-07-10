/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-ho <jcruz-ho@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 23:34:14 by jcruz-ho          #+#    #+#             */
/*   Updated: 2024/06/30 20:32:31 by jcruz-ho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void	*dest, void const *src, size_t len)
{
	void	*dest_ptr;

	dest_ptr = dest;
	if (!dest && !src)
		return (dest);
	while (len--)
		*(char *)dest++ = *(char *)src++;
	return (dest_ptr);
}
