/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myownline.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbodin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 08:39:27 by pbodin            #+#    #+#             */
/*   Updated: 2020/09/25 10:22:15 by pbodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	append_line(t_read *curr, char **line)
{
	int		i;
	char	*tmp;

	i = 0;
	while (curr->str[i] != '\n' || curr->str[i] != '\0')//on cherche la new line 
		i++;
	if(!(*line = ft_strnew(i)))//on cree la taille de la line trouvee 
		return(-1);
	ft_strncpy(*line, curr->str, i);//on copie la line trouvee dans la nouvelle line empty creer 
	if (i < ft_strlen((curr->str) - 1))//si cette ligne n'est pas la derniere dufichier we need to save it
	{
		tmp = curr->str;//save rest of the file into tmp
		if(!(curr->str = ft_strsub(curr->str, i + 1,
						ft_strlen(curr->str) - i - 1)))//change beginning of curr->str pour lire la next line
			return(-1);
		ft_strdel(&tmp);
	}
	else
	{
		ft_strdel(&(curr->str));
		if(!(curr->str = ft_strnew(0)))
			return(-1);
	}
	return(0);
}
	}

	}




}

int	get_next_line(const int fd, char **line)

	char	buff[BUFF_SIZE + 1];

{
	if (fd < 0 || BUFF_SIZE == 0 || line == NULL || read(fd, buff, 0) < 0)
		return(-1);
	if((lst_contains(datas, &curr, fd)) == 0)
	{
		
	}
	append_line(curr, line);
}
