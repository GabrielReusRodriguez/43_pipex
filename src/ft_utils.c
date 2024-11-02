/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:24:18 by greus-ro          #+#    #+#             */
/*   Updated: 2024/03/16 22:26:35 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#include "libft.h"

char	*ft_utils_which(char	**cmd_args, char **path)
{
	char	*cmd_path;
	size_t	i;

	cmd_path = NULL;
	if (access(cmd_args[0], F_OK) == 0)
		cmd_path = ft_strdup(cmd_args[0]);
	else
	{
		i = 0;
		while (path[i] != NULL)
		{
			cmd_path = ft_strjoin(path[i], cmd_args[0]);
			if (access(cmd_path, F_OK) == 0)
				return (cmd_path);
			free(cmd_path);
			i++;
		}
		return (NULL);
	}
	return (cmd_path);
}

int	ft_strcmp(const char *str1, const char *str2)
{
	int	i;

	i = 0;
	while (str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}
/*
int ft_utils_str_get_bigger_len(const char *s1, const char *s2)
{
	int	bigger_len;

	return (bigger_len);
}
*/