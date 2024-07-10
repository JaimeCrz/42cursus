/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-ho <jcruz-ho@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 20:44:28 by jcruz-ho          #+#    #+#             */
/*   Updated: 2024/07/01 21:52:05 by jcruz-ho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    ft_atoi(const char *str)
{
    int    result;
    int    sign;
    int    i;
    
    result = 0;
    sign = 1;
    i = 0;
    while (ft_isspace(str[i]))
        i++;
    if (str[i] == '+' && str[i + 1] != '-')
        i++;
       if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
     while (str[i] && str[i] >= 48 && str[i] <= 57)
    {
        result *= 10;
	result += str[i] - 48;
	i++;
    }
     result *= sign;
    return (result);
}

int    ft_isspace(int c)
{
    if (c == 9 || c == 10 || c == 11 || c == 12 || c == 13 || c == 32)
        return (1);
    return (0);
}
