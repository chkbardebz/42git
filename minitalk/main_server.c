/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_server.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judenis <judenis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:15:16 by judenis           #+#    #+#             */
/*   Updated: 2024/05/14 15:27:31 by judenis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	get_pid(void)
{
	int	pid;

	pid = getpid();
	return (pid);
}

int	main(void)
{
	printf("%d\n", get_pid());
}
