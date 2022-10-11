/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maledesm <maledesm@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:57:10 by maledesm          #+#    #+#             */
/*   Updated: 2022/08/24 12:14:55 by maledesm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stddef.h>
char *ft_strncpy(char *dest, char *src, unsigned int n)
{
//if para que regrese si no hay memria asignada en el destino
	if(dest == NULL)
		return NULL;
//puntero que apunta al cominezoi de la string de dest
	char *ptr = dest;
	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	// string de dest de terminación nula
	*dest = '\0';
	return (ptr);
}
