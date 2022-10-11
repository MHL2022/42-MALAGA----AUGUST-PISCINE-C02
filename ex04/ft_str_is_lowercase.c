/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marialedesmabasualdo <maledesm@studen      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 01:32:49 by marialede         #+#    #+#             */
/*   Updated: 2022/08/23 01:56:16 by marialede        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int a;
	
	a = 0;
	while (str[a] != '\0')
	{
		if ((*str < 'a') || (*str >'z'))
			return (0);
		a++;
	}
	return (1);
}

