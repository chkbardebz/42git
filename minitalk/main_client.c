/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_client.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judenis <judenis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:04:10 by judenis           #+#    #+#             */
/*   Updated: 2024/05/14 16:13:17 by judenis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

char *convert_bin(char )
{
    
}

void client(int pid, char *str)
{
    
}

int ft_isnum(char *str)
{
    int i;
    
    i = 0;
    while (str[i])
    {
        if (str[i] > '9' || str[i] < '0')
            return (-1);
        i++;
    }
    return (0);
}

int main(int argc, char *argv[])
{
    if (argc != 3)
        return (write(2, "Error\nToo/few many arguments", 29));
    if (ft_isnum(argv[1]) < 0)
        return (write(2, "Error\nPid incorrect", 20));
    client(argv[1], argv[2]);
}
