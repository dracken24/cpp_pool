/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:09:27 by nadesjar          #+#    #+#             */
/*   Updated: 2022/07/26 20:01:32 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

#include <string.h>

Contact::Contact()
{
	// std::cout << "Construct Contact" << std::endl;
	// this->first_name = new char[64];
	// this->last_name = new char[64];
	// this->nickname = new char[64];
	// this->d_secret = new char[128];
	// this->phone = new char[16];
	// this->index = new int[1];

	return;
}

Contact::~Contact(void)
{
	// std::cout << "Destruct Contact" << std::endl;
	return;
}

Contact	Contact::InitContact(int i)
{
	Contact	cont;
	
	cont.first_name = new char[64];
	cont.last_name = new char[64];
	cont.nickname = new char[64];
	cont.d_secret = new char[128];
	cont.phone = new char[16];
	cont.index = new int[1];

	cont.index[0] = i;
	std::cout << std::endl;
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
	std::cout << std::endl;
	return (cont);
}

void	Contact::DeleteContact(void)
{
	delete[] this->first_name;
	delete[] this->last_name;
	delete[] this->nickname;
	delete[] this->phone;
	delete[] this->d_secret;
	delete[] this->index;
}

char	*Contact::ReturnFname(void)
{
	return (this->first_name);
}

char	*Contact::ReturnLname(void)
{
	return (this->last_name);
}

char	*Contact::ReturnNick(void)
{
	return (this->nickname);
}

char	*Contact::ReturnPhone(void)
{
	return (this->phone);
}

char	*Contact::ReturnSecret(void)
{
	return (this->d_secret);
}

int		Contact::ReturnIndex(void)
{
	return (this->index[0]);
}
