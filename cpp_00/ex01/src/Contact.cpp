/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:09:27 by nadesjar          #+#    #+#             */
/*   Updated: 2022/07/21 21:11:42 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

#include <string.h>

Contact::Contact()
{
	return;
}

Contact::~Contact(void)
{
	std::cout << "Destruct Contact" << std::endl;
	return;
}

Contact	Contact::Add(void)
{
	Contact	cont;

	cont.first_name = new char[64];
	cont.last_name = new char[64];
	cont.nickname = new char[64];
	cont.d_secret = new char[128];
	cont.phone = new char[16];

	std::cout << "Enter First Name: " << std::endl;
	std::cin >> cont.first_name;
	std::cout << "Enter Last Name: " << std::endl;
	std::cin >> cont.last_name;
	std::cout << "Enter a Nickname: " << std::endl;
	std::cin >> cont.nickname;
	std::cout << "Enter a Phone number: " << std::endl;
	std::cin >> cont.phone;
	std::cout << "Just for fun, what is your darkest secret?? " << std::endl;
	std::cin >> cont.d_secret;

	std::cout << "ADDDDD" << std::endl;

	return (cont);
}

void	Contact::Search(PhoneBook *repertoire)
{
	char	*str;
	int		i = -1;

	str = new char[32];
	std::cout << "What is the first or last name of the contact you are looking for ?" << std::endl;
	std::cin >> str;

	while (++i < repertoire->nbr_ct)
	{
		if (strcmp(str, repertoire->tab[i].first_name) == 0)
		{
			std::cout << repertoire->tab[i].first_name << std::endl;
			std::cout << repertoire->tab[i].last_name << std::endl;
			std::cout << repertoire->tab[i].nickname << std::endl;
			std::cout << repertoire->tab[i].phone << std::endl;
			std::cout << repertoire->tab[i].d_secret << std::endl;
			return;
		}
		
	}
		
	delete[] str;
}
