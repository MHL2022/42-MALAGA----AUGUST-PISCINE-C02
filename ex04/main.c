/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marialedesmabasualdo <maledesm@studen      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 01:44:20 by marialede         #+#    #+#             */
/*   Updated: 2022/08/23 01:58:38 by marialede        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int     ft_str_is_lowercase(char *str);
int	main (void)
{
	char str[] = "helenaoliviaJ ";
	printf("%d", ft_str_is_lowercase(str));

}
