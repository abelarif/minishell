/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 12:58:17 by abelarif          #+#    #+#             */
/*   Updated: 2020/08/10 10:10:13 by abelarif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	ft_line()
{
	t_linecommand	*linecommand;
	// t_command		*command;

	first_split();
	list_reverselc(&g_linecommand);
	linecommand = g_linecommand;
	while (linecommand)
	{
		pipe_split(linecommand->linecommand);
		// manip_cmd(command);
		linecommand = linecommand->next;
	}
}