/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   momento.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:22:10 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/09/18 14:22:10 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOMENTO_H
# define MOMENTO_H

# include <unistd.h>
# include <stdlib.h>

//utils functions
int		ft_numlen(unsigned int nb);
void	ft_strcpy(char *dest, char *src);
void	ft_strcat(char *dest, char *src);
char	*ft_itoa(int nb);
char	*ft_strdup(char *str);

//momento functions
char	*ft_horodate(unsigned int time, char *time_string);
char	*ft_multi(unsigned int time, unsigned int unit, char *sing, char *pl);
char	*momento(unsigned int nb);
int		ft_strlen(char *str);

#endif