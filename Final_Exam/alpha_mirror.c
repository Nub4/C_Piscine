/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 10:51:31 by exam              #+#    #+#             */
/*   Updated: 2020/02/28 11:21:57 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_alpha_mirror(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	ft_alpha_mirror(argv[1]);
	ft_putchar('\n');
	return (0);
}

void	ft_alpha_mirror(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'A')
			ft_putchar('Z');
		else if (str[i] == 'B')
			ft_putchar('Y');
		else if (str[i] == 'C')
			ft_putchar('X');
		else if (str[i] == 'D')
			ft_putchar('W');
		else if (str[i] == 'E')
			ft_putchar('V');
		else if (str[i] == 'F')
			ft_putchar('U');
		else if (str[i] == 'G')
			ft_putchar('T');
		else if (str[i] == 'H')
			ft_putchar('S');
		else if (str[i] == 'I')
			ft_putchar('R');
		else if (str[i] == 'J')
			ft_putchar('Q');
		else if (str[i] == 'K')
			ft_putchar('P');
		else if (str[i] == 'L')
			ft_putchar('O');
		else if (str[i] == 'M')
			ft_putchar('N');
		else if (str[i] == 'N')
			ft_putchar('M');
		else if (str[i] == 'O')
			ft_putchar('L');
		else if (str[i] == 'P')
			ft_putchar('K');
		else if (str[i] == 'Q')
			ft_putchar('J');
		else if (str[i] == 'R')
			ft_putchar('I');
		else if (str[i] == 'S')
			ft_putchar('H');
		else if (str[i] == 'T')
			ft_putchar('G');
		else if (str[i] == 'U')
			ft_putchar('F');
		else if (str[i] == 'V')
			ft_putchar('E');
		else if (str[i] == 'W')
			ft_putchar('D');
		else if (str[i] == 'X')
			ft_putchar('C');
		else if (str[i] == 'Y')
			ft_putchar('B');
		else if (str[i] == 'Z')
			ft_putchar('A');
		else if (str[i] == 'a')
			ft_putchar('z');
		else if (str[i] == 'b')
			ft_putchar('y');
		else if (str[i] == 'c')
			ft_putchar('x');
		else if (str[i] == 'd')
			ft_putchar('w');
		else if (str[i] == 'e')
			ft_putchar('v');
		else if (str[i] == 'f')
			ft_putchar('u');
		else if (str[i] == 'g')
			ft_putchar('t');
		else if (str[i] == 'h')
			ft_putchar('s');
		else if (str[i] == 'i')
			ft_putchar('r');
		else if (str[i] == 'j')
			ft_putchar('q');
		else if (str[i] == 'k')
			ft_putchar('p');
		else if (str[i] == 'l')
			ft_putchar('o');
		else if (str[i] == 'm')
			ft_putchar('n');
		else if (str[i] == 'n')
			ft_putchar('m');
		else if (str[i] == 'o')
			ft_putchar('l');
		else if (str[i] == 'p')
			ft_putchar('k');
		else if (str[i] == 'q')
			ft_putchar('j');
		else if (str[i] == 'r')
			ft_putchar('i');
		else if (str[i] == 's')
			ft_putchar('h');
		else if (str[i] == 't')
			ft_putchar('g');
		else if (str[i] == 'u')
			ft_putchar('f');
		else if (str[i] == 'v')
			ft_putchar('e');
		else if (str[i] == 'w')
			ft_putchar('d');
		else if (str[i] == 'x')
			ft_putchar('c');
		else if (str[i] == 'y')
			ft_putchar('b');
		else if (str[i] == 'z')
			ft_putchar('a');
		else
			ft_putchar(str[i]);
		i++;
	}
}					
