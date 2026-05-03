/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fannyallegre <fannyallegre@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:08:51 by fannyallegr       #+#    #+#             */
/*   Updated: 2026/05/03 12:31:47 by fannyallegr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


char    *ft_stock(int fd, char *stash)
{
        char    *buff;
        int     read_bytes;
        char    *old_stash;

        read_bytes = 1;
        old_stash = NULL;
        buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
        if (!buff)
                return (NULL);
        if (!stash)
                stash = ft_strdup("");
        while (!ft_strchr(stash, '\n') && read_bytes > 0)
        {
                read_bytes = read(fd, buff, BUFFER_SIZE);
                if (read_bytes == -1)
                {
                        free(buff);
                        free(stash);
                        return (NULL);
                }
                buff[read_bytes] = '\0';
                old_stash = stash;
                stash = ft_strjoin(stash, buff);
                free(old_stash);
                if (!stash)
                {
                        free(buff);
                        return (NULL);
                }
        }
        free(buff);
        return(stash);
}
 
char    *extract_line(char *stash)
{
        int	i;
        char    *line;

	i = 0;     
        if (!stash)
                return (NULL);
	while (stash[i] != '\0' && stash[i] != '\n')
		i++;
	if (stash[i] == '\n')
		line = ft_substr(stash, 0, i + 1);
        else if (stash[i] == '\0' && i > 0)
                line = ft_substr(stash, 0, i);
	return (line);
}

char    *update_stash(char *stash)
{
        int     i;
        char    *new_stash;

        i = 0;
        if (!ft_strchr(stash, '\n'))
        {
                free(stash);
                return (NULL);
        }
        while (stash[i] != '\n')
                i++;
        new_stash = ft_substr(stash, i + 1, ft_strlen(stash - (i + 1)));
        free(stash);
        return (new_stash);
}

char    *get_next_line(int fd)
{
       static char     *stash;
       char     *line;
       
        if (fd > 2 && BUFFER_SIZE <= 0)
                return (NULL);
        stash = ft_stock(fd, stash);
        if (!stash)
                return (NULL);
        line = extract_line(stash);
        stash = update_stash(stash);
        return (line);
}