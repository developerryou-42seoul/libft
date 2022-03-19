/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sryou <sryou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 19:36:58 by sryou             #+#    #+#             */
/*   Updated: 2022/03/11 20:14:28 by sryou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size;
	char	*mkstr;

	if (s == 0)
		return (0);
	size = ft_strlen(s);
	if (size - start > len)
		size = len;
	else
		size = size - start;
	mkstr = (char *)malloc(sizeof(char) * (size + 1));
	if (mkstr == 0)
		return (0);
	ft_strlcpy(mkstr, s + start, size + 1);
	return (mkstr);
}
