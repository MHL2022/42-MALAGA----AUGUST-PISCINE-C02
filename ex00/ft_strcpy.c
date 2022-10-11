/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maledesm <maledesm@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 15:07:01 by maledesm          #+#    #+#             */
/*   Updated: 2022/08/22 18:53:15 by maledesm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char *ft_strcpy(char *dest, char *src)
{
	// regresa si no hay memoria asignada al destino
	if (dest == NULL) 
	{
        return NULL;
    }
	//este puntero apunta al comienzo del string de destino
	char *ptr = dest;	
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	//le ponemos el caracter nulo del final
	*dest = '\0';
	return (ptr);
}
