/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:09:41 by nadesjar          #+#    #+#             */
/*   Updated: 2022/07/24 16:03:01 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"
#include "../includes/PhoneBook.hpp"

int	main(void)
{
	PhoneBook	repertoire;
	Contact		contact;
	int			cmd;
	int			i;

	repertoire.nbr_ct = 0;
	i = 0;
	repertoire.tab = new Contact[8];
	while (i >= 0)
	{
		cmd = repertoire.ChooseAction();
		if (cmd == 1)
		{
			repertoire.tab[i] = repertoire.Add();
			if (repertoire.nbr_ct <=7)
				repertoire.nbr_ct++;
			if (i >= 7)
				i = 0;
			else
				i++;
		}
		else if (cmd == 2)
			repertoire.Search(repertoire.nbr_ct);
		else if (cmd == 3)
			break;
	}
	delete[] repertoire.tab;
	return (0);
}


