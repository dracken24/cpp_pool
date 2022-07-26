/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:09:27 by nadesjar          #+#    #+#             */
/*   Updated: 2022/07/25 22:11:34 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

#include <string.h>

Contact::Contact()
{
	// std::cout << "Construct Contact" << std::endl;
	this->first_name = new char[64];
	this->last_name = new char[64];
	this->nickname = new char[64];
	this->d_secret = new char[128];
	this->phone = new char[16];
	this->index = new int[1];

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

char	*Contact::ReturnFname(void)
{
	char	*str = new char[32];

	str = this->first_name;
	return (str);
}

char	*Contact::ReturnLname(void)
{
	char	*str = new char[32];

	str = this->last_name;
	return (str);
}

char	*Contact::ReturnNick(void)
{
	char	*str = new char[32];

	str = this->nickname;
	return (str);
}

char	*Contact::ReturnPhone(void)
{
	char	*str = new char[32];

	str = this->phone;
	return (str);
}

char	*Contact::ReturnSecret(void)
{
	char	*str = new char[32];

	str = this->d_secret;
	return (str);
}

int		Contact::ReturnIndex(void)
{
	int	ret;

	ret = this->index[0];
	return (ret);
}
