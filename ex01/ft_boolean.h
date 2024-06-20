/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seantoni <seantoni@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:41:37 by seantoni          #+#    #+#             */
/*   Updated: 2023/11/09 23:30:24 by seantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef enum a_bool
{
	false = 0,
	true = 1,
}	t_bool;

# define TRUE true
# define FALSE false
# define SUCCESS 0
# define ODD_MSG "Tengo un numero inpar de argumentos\n"
# define EVEN_MSG "Tengo un numero par de argumentos\n"
# define EVEN(x) ((x % 2) == 0)

#endif
