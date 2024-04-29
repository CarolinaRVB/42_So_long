/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_utils_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:45:41 by crebelo-          #+#    #+#             */
/*   Updated: 2023/12/18 20:36:06 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	close_game(t_game *game, char *msg)
{
	free_game(game, msg);
	mlx_destroy_image(game->mlx_ptr, game->p);
	mlx_destroy_image(game->mlx_ptr, game->p1);
	mlx_destroy_image(game->mlx_ptr, game->p2);
	mlx_destroy_image(game->mlx_ptr, game->p3);
	mlx_destroy_image(game->mlx_ptr, game->p1l);
	mlx_destroy_image(game->mlx_ptr, game->p2l);
	mlx_destroy_image(game->mlx_ptr, game->p3l);
	mlx_destroy_image(game->mlx_ptr, game->p5);
	mlx_destroy_image(game->mlx_ptr, game->p6);
	mlx_destroy_image(game->mlx_ptr, game->p7);
	mlx_destroy_image(game->mlx_ptr, game->e);
	mlx_destroy_image(game->mlx_ptr, game->x);
	mlx_destroy_image(game->mlx_ptr, game->c);
	mlx_destroy_image(game->mlx_ptr, game->t);
	mlx_destroy_image(game->mlx_ptr, game->b);
	mlx_destroy_window(game->mlx_ptr, game->win_ptr);
	mlx_destroy_display(game->mlx_ptr);
	free(game->mlx_ptr);
	exit(0);
}

void	free_map(t_map *map)
{
	int	i;

	i = 0;
	if (map)
	{
		if (map->outline)
		{
			while (i < map->height)
			{
				free(map->outline[i]);
				i++;
			}
			free(map->outline);
			map->outline = NULL;
		}
		free(map);
	}
}

int	free_game(t_game *game, char *str)
{
	if (str)
		ft_printf("%s\n", str);
	if (game)
	{
		if (game->map)
		{
			free_map(game->map);
			game->map = NULL;
		}
	}
	return (1);
}

void	free_mapcpy(char **nmap)
{
	int	i;

	i = 0;
	while (nmap[i])
	{
		free(nmap[i]);
		i++;
	}
	free(nmap);
}
void	put_enemy_img(t_game *game)
{
	void	*img;

	img = game->x;
	if (img)
	{
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, img,
			game->ex * PIXEL_SIZE, game->ey * PIXEL_SIZE);
	}
}
