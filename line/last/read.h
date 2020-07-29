/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 15:40:42 by abelarif          #+#    #+#             */
/*   Updated: 2020/07/27 09:29:34 by abelarif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READ_H
#define READ_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "./libft/libft.h"
#include "./get_next_line/get_next_line.h"

typedef struct s_splitpoint t_splitpoint;
typedef	struct s_command t_command;

void			show_all(t_splitpoint *split_point);
void			ft_split_pipe(t_splitpoint *split_point);
int				manipquotes(int quote, int quote_type);
char			*get_split(char *line, int split_by);
void			list_reverse(t_splitpoint **split_point);
char			*ft_substr(char const *s, unsigned int start, size_t len);
int				get_next_line(int fd, char **line);
struct s_splitpoint
{
	char		*long_command;
	t_splitpoint	*next;
};

struct s_command
{
	char		*command;
	char		*cmd;
	int			bin;
	char		**args;
	char		**opts;
	int			n_redir;
	int			*redir;
	char		**redir_to;
	t_command	*next;
};

#endif
