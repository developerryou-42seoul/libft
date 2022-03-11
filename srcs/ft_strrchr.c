/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sryou <sryou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:53:57 by sryou             #+#    #+#             */
/*   Updated: 2022/03/11 17:06:17 by sryou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ch_c;
	size_t	idx;

	ch_c = (char)c;
	idx = ft_strlen(s);
	while (idx >= 0)
	{
		if (s[idx] == ch_c)
			return ((char *)s + idx);
		idx--;
	}
	return (0);
}
