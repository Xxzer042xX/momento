/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:21:35 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/09/18 14:21:35 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "momento.h"

char	*ft_strdup(char *str)
{
	char	*dup;
	char	*p_dup;

	dup = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
	if (!(dup))
		return (NULL);
	p_dup = dup;
	while (*str)
		*p_dup++ = *str++;
	*p_dup = *str;
	return (dup);
}

int	ft_numlen(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

void	ft_strcpy(char *dest, char *src)
{
	while (*src)
		*dest++ = *src++;
	*dest = *src;
}

void	ft_strcat(char *dest, char *src)
{
	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
}

char	*ft_itoa(int nb)
{
	int		len;
	char	*result;

	len = ft_numlen(nb);
	if (nb == -2147483648)
		return (ft_strdup("-2147483648"));
	result = (char *)malloc(sizeof(char) * len + 1);
	if (!(result))
		return (NULL);
	if (nb < 0)
	{
		result[0] = '-';
		nb *= -1;
	}
	if (nb == 0)
		result[0] = '0';
	result[len] = '\0';
	while (nb > 0)
	{
		result[--len] = nb % 10 + '0';
		nb /= 10;
	}
	return (result);
}
