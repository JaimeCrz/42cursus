/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-ho <jcruz-ho@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 20:33:08 by jcruz-ho          #+#    #+#             */
/*   Updated: 2024/06/30 21:39:52 by jcruz-ho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*cs;
	unsigned char	*cd;

	if (!dst && !src)
		return (NULL);
	cs = (unsigned char *)src;
	cd = (unsigned char *)dst;
	if (dst > src)
	{
		while (len-- > 0)
			cd[len] = cs[len];
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
