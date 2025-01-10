/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 07:27:44 by yufli             #+#    #+#             */
/*   Updated: 2024/12/23 17:04:31 by yufli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display_file(char *array)
{
	char	buffer[30000];
	int		fd;
	size_t	bytes_read;

	fd = open(array, O_RDONLY);
	if (fd < 0)
	{
		write(2, "Cannot read file.\n", 18);
		return ;
	}
	else
	{
		bytes_read = read(fd, buffer, 30000);
		if (bytes_read < 0)
		{
			write(2, "Cannot read file.\n", 18);
			close (fd);
			return ;
		}
		write(1, buffer, bytes_read);
	}
	close(fd);
	return ;
}

int	main(int argc,	char **argv)
{
	if (argc == 1)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	else if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	else
	{
		ft_display_file(argv[1]);
		return (0);
	}
}
