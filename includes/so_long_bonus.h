/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 20:04:01 by tbelleng          #+#    #+#             */
/*   Updated: 2023/02/16 20:04:03 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_BONUS_H
# define SO_LONG_BONUS_H

# include "../mlx/mlx.h"
# include "../mlx/mlx_int.h"
# include "../printf/includes/ft_printf.h"
# include "../printf/libft/libft.h"
# include "get_next_line.h"
# include <stdio.h>

typedef struct g_list
{
	int		nb_move;
	int		player_col;
	int		player_line;
	int		collect_total;
	int		collect_current;
	int		exit_col;
	int		exit_line;
	int		anim;
	char	**map;
	void	*mlx_ptr;
	void	*win_ptr;
	void	*img[7];
}			t_data;

void		checker_map(char **tab);
int			check_char(char **tab);
int			check_length(char **tab);
int			check_startend(char **tab);
int			line_count(char **tab);
char		**checker(char *map, char **tab);
void		display_map(t_data *data);
void		pathfinding_(char *str, t_data *data);
void		recup_pos_p(t_data *data);
int			len(char **map);
void		resousse(t_data *data, int i, int j, int u);
void		check_pathfinding(t_data *data);
void		put_x_p(t_data *data, int i, int j);
void		put_x_m(t_data *data, int i, int j);
void		total_coin(t_data *data);
void		recup_pos_p(t_data *data);
void		recup_pos_e(t_data *data);
int			ft_freeall(char **tab);
void		ft_destroy(t_data *data);
int			close_window(void);
void		set_tab(t_data *data, int j);
void		set_img(t_data *data);
int			swap_(t_data *data, char mov);
void		ft_escape(t_data *data);
int			game_finish(t_data *data, int u);

#endif