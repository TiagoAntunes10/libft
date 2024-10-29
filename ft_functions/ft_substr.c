/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 08:52:36 by tialbert          #+#    #+#             */
/*   Updated: 2023/09/29 08:52:49 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (len == 0 || start >= ft_strlen(s))
	{
		str = malloc(1);
		if (str == 0)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	if (len <= (ft_strlen(s) - start))
		str = malloc(len + 1);
	else
		str = malloc((ft_strlen(s) - start) + 1);
	if (str == 0)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}
