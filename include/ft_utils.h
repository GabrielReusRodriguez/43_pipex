/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:26:08 by greus-ro          #+#    #+#             */
/*   Updated: 2024/11/02 18:27:00 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILS_H
# define FT_UTILS_H

typedef unsigned char	t_bool;

# define TRUE 1
# define FALSE 0

char	*ft_utils_which(char **cmd_args, char **path);
int		ft_strcmp(const char *str1, const char *str2);

#endif