/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-ho <jcruz-ho@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 19:58:38 by jcruz-ho          #+#    #+#             */
/*   Updated: 2024/06/29 23:17:12 by jcruz-ho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;
	char			*str_ptr;

	str_ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		str_ptr[i] = c;
		i++;
	}
	return (s);
}
