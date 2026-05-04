/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanalleg <fanalleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:08:51 by fannyallegr       #+#    #+#             */
/*   Updated: 2026/05/04 13:08:24 by fanalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_stock(int fd, char *stash)
{
	char	*buff;
	int		read_bytes;
	char	*old_stash;

	old_stash = NULL;
	read_bytes = 1;
	buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!stash)
		stash = ft_strdup("");
	while (!ft_strchr(stash, '\n') && read_bytes > 0)
	{
		read_bytes = read(fd, buff, BUFFER_SIZE);
		if (read_bytes > 0)
		{
			buff[read_bytes] = '\0';
			old_stash = stash;
			stash = ft_strjoin(stash, buff);
			free(old_stash);
		}
	}
	free(buff);
	return (stash);
}

char	*extract_line(char *stash)
{
	int		i;
	char	*line;

	i = 0;
	line = NULL;
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

char	*update_stash(char *stash)
{
	int		i;
	char	*new_stash;

	i = 0;
	if (!ft_strchr(stash, '\n'))
	{
		free(stash);
		return (NULL);
	}
	while (stash[i] != '\n')
		i++;
	new_stash = ft_substr(stash, i + 1, ft_strlen(stash) - (i + 1));
	free(stash);
	return (new_stash);
}

char	*get_next_line(int fd)
{
	static char		*stash;
	char			*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || fd > 1024)
		return (NULL);
	stash = ft_stock(fd, stash);
	if (!stash)
		return (NULL);
	line = extract_line(stash);
	stash = update_stash(stash);
	return (line);
}

// #include <fcntl.h>
// #include "get_next_line.h"
//	TO TEST : gcc -D BUFFER_SIZE=42 main.c get_next_line.c get_next_line_utils.c
//	./a.out [file]
// int	main(int argc, char **argv)
// {
// 	int	fd;
// 	char	*line;

// 	(void)argc;
// 	fd = open(argv[1], O_RDONLY);
// 	line = "";
// 	while (line != NULL)
// 	{
// 		line = get_next_line(fd);
// 		printf("%s", line);
// 	}
// 	fd = close(fd);
// 	return (0);
// }