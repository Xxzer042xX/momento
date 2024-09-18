/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:20:30 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/09/18 14:20:30 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "momento.h"

int	main(int ac, char **av)
{
	char	*horodate;

	if (ac == 2 && atoi(av[1]) >= 0)
	{
		horodate = momento(atoi(av[1]));
		if ((!(horodate)) && write (1, "E\n", 2))
			return (1);
		write (1, horodate, ft_strlen(horodate));
		free(horodate);
	}
	write (1, "\n", 1);
	return (0);
}
