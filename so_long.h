/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:38:10 by crebelo-          #+#    #+#             */
/*   Updated: 2023/12/18 20:35:52 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdio.h>
# include <time.h>
# include <stdlib.h>
# include <fcntl.h>
# include "minilibx-linux/mlx.h"
# include "libft/libft.h"
# include <X11/X.h>
# include <X11/keysym.h>

# define TITLE "so_long"
# define BACKGROUND "textures/Background.xpm"
# define TILES "textures/Tiles.xpm"
# define PLAYER "textures/P.xpm"
# define PLAYER1 "textures/P2.xpm"
# define PLAYER2 "textures/P3.xpm"
# define PLAYER3 "textures/P4.xpm"
# define PLAYER1L "textures/P2L.xpm"
# define PLAYER2L "textures/P3L.xpm"
# define PLAYER3L "textures/P4L.xpm"
# define PLAYER5 "textures/P5.xpm"
# define PLAYER6 "textures/P6.xpm"
# define PLAYER7 "textures/P8.xpm"
# define COLLECT "textures/col.xpm"
# define EXIT "textures/exit.xpm"
# define ENEMY "textures/En.xpm"
# define TIME 99990
# define PIXEL_SIZE 55
# define KEY_ESC 65307
# define ARROW_RIGHT 65363
# define ARROW_LEFT 65361
# define ARROW_UP 65362
# define ARROW_DOWN 65364
# define KEY_D 100
# define KEY_W 119
# define KEY_S 115
# define KEY_A 97
# define MLX_ERROR 1

typedef struct s_map
{
	char	**outline;
	int		height;
	int		width;
	int		x;
	int		y;
}	t_map;

typedef struct s_game
{
	void	*mlx_ptr;
	void	*win_ptr;
	void	*p;
	void	*p1;
	void	*p2;
	void	*p3;
	void	*p1l;
	void	*p2l;
	void	*p3l;
	void	*p5;
	void	*p6;
	void	*p7;
	void	*e;
	void	*x;
	void	*c;
	void	*t;
	void	*b;
	int		player;
	int		player_x;
	int		player_x_pre;
	int		player_y;
	int		player_y_pre;
	int		ey;
	int		ex;
	int		exit;
	int		vale;
	int		colexit;
	int		exit_x;
	int		exit_y;
	int		collectible;
	int		tile;
	int		move_count;
	int		flag;
	
	t_map	*map;
}	t_game;

// so long utils 1
void	free_map(t_map *map);
int		free_game(t_game *game, char *str);
void	close_game(t_game *game, char *msg);
void	free_mapcpy(char **nmap);
void	put_enemy_img(t_game *game);

// so long utils 2
void	move_right(t_game *game, int *x, int *x_pre);
void	move_left(t_game *game, int *x, int *x_pre);
void	move_up(t_game *game, int *y, int *y_pre);
void	move_down(t_game *game, int *y, int *y_pre);
int		keypress(int key, t_game *game);

// so long utils 3
void	move_animation_right(t_game *game, int x, int x_pre, int y);
void	move_animation_left(t_game *game, int x, int x_pre, int y);
void	move_animation_up(t_game *game, int x, int y, int y_pre);
void	move_animation_down(t_game *game, int x, int y, int y_pre);
void	display_count(t_game *game, int count);

// so long build
int		get_map_height(char *av);
void	init_imgs(t_game *game);
int		init_struct(t_game *game, char *av);
int		build_map(t_game *game, char *av);

// so long check
int		checkplayersresult(t_game *game);
int		checknrplayers(t_game *game, int height);
int		mapwalls(t_game *game, int len, int i);
int		mapsize(t_game *game);
int		check_map(t_game *game);

// so long exits
int		destroy(t_game *game, char *msg);
int		destroy_x(t_game *game);
int		error_exit(char *str);
int		checkmapexit(t_game *game);
void	floodcheck(t_game *game, int x, int y, char **nmap);

// so long init
void	init_player(t_game *game);
void	init_enemy(t_game *game, int size);
void	init_imgs_files(t_game *game);
void	populate_map(t_game *game, void *img);
int		initiate_game(t_game *game);
#endif
