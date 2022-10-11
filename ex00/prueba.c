/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maledesm <maledesm@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:39:38 by maledesm          #+#    #+#             */
/*   Updated: 2022/08/22 18:40:02 by maledesm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
 
// Función para implementar la función `strcpy()`
char* strcpy(char* destination, const char* source)
{
    // regresa si no hay memoria asignada al destino
    if (destination == NULL) {
        return NULL;
    }
 
    // toma un puntero que apunta al comienzo de la string de destino
    char *ptr = destination;
 
    // copia la string C señalada por la fuente en la array
    // apuntado por destino
    while (*source != '\0')
    {
        *destination = *source;
        destination++;
        source++;
    }
 
    // incluye el carácter nulo de terminación
    *destination = '\0';
 
    // el destino es devuelto por el estándar `strcpy()`
    return ptr;
}
 
// Implementar la función `strcpy()` en C
int main(void)
{
    char source[] = "Techie Delight";
    char destination[25];
 
    printf("%s\n", strcpy(destination, source));
 
    return 0;
}
