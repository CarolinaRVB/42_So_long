/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_exits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:19:27 by crebelo-          #+#    #+#             */
/*   Updated: 2023/11/29 10:19:27 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	destroy(t_game *game, char *msg)
{
	close_game(game, msg);
	exit(0);
}

int	destroy_x(t_game *game)
{
	close_game(game, "Closing the game");
	return (0);
}

int	error_exit(char *str)
{
	ft_printf("%s\n", str);
	return (1);
}

void	floodcheck(t_game *game, int x, int y, char **nmap)
{
	if (game->flag == 0 && (nmap[y][x] == 'x' || nmap[y][x] == '1'
		|| (y == game->ey && x == game->ex)))
		return ;
	else if (game->flag == 1 && (nmap[y][x] == 'x' || nmap[y][x] == '1'
		|| (y == game->ey && x == game->ex)))
	{
		return ;
	}
	else if (nmap[y][x] == 'C')
		game->colexit--;
	else if (nmap[y][x]== 'E')
	{
		game->vale = 1;
		return ;
	}
	nmap[y][x]  = 'x';
	floodcheck(game, x + 1, y, nmap);
	floodcheck(game, x - 1, y, nmap);
	floodcheck(game, x, y + 1, nmap);
	floodcheck(game, x, y - 1, nmap);
}

int	checkmapexit(t_game *game)
{
	char	**nmap;
	int		i;
	int		l;

	i = 0;
	game->vale = 0;
	game->colexit = game->collectible;
	l = game->map->height;
	nmap = ft_calloc(l + 1, sizeof(char *));
	while (i < l)
	{
		nmap[i] = ft_strdup(game->map->outline[i]);
		i++;
	}
	floodcheck(game, game->player_x, game->player_y, nmap);
	free_mapcpy(nmap);
	if (game->vale != 0 && game->colexit == 0)
		return (1);
	else
		return (0);
}
