/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   momento.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:33:47 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/09/18 12:33:47 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "momento.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

char	*ft_horodate(unsigned int time, char *time_string)
{
	int		len;
	char	*horodate;

	len = ft_numlen(time);
	while (time_string[len])
		len += 1;
	horodate = (char *)malloc(sizeof(char) * len + 1);
	if (!(horodate))
		return (NULL);
	ft_strcpy(horodate, ft_itoa(time));
	ft_strcat(horodate, time_string);
	return (horodate);
}

char	*ft_multi(unsigned int time, unsigned int unit, char *sing, char *pl)
{
	unsigned int	count;

	count = (time / unit);
	if (count > 1)
		return (ft_horodate(count, pl));
	return (ft_horodate(count, sing));
}

char	*momento(unsigned int nb)
{
	if (nb < 60)
		return (ft_horodate(nb, " secondes ago"));
	else if (nb < 3600)
		return (ft_multi(nb, 60, " minute ago", " minutes ago"));
	else if (nb < 86400)
		return (ft_multi(nb, 3600, " hour ago", " hours ago"));
	else if (nb < 2592000)
		return (ft_multi(nb, 86400, " day ago", " days ago"));
	else if (nb < 31104000)
		return (ft_multi(nb, 2592000, " month ago", " months ago"));
	else
		return (ft_multi(nb, 31104000, "year ago", " years ago"));
}
