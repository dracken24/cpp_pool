/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:09:27 by nadesjar          #+#    #+#             */
/*   Updated: 2022/07/28 13:50:14 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

Contact::Contact(void)
{
	return;
}

Contact::~Contact(void)
{
	return;
}

void	Contact::InitContact(void)
{
	this->first_name = new char[64];
	this->last_name = new char[64];
	this->nickname = new char[64];
	this->d_secret = new char[128];
	this->phone = new char[16];
}

void	Contact::ChangeContact(void)
{
	std::cout << std::endl;
	std::cout << "Enter First Name: " << std::endl;
	std::cin >> this->first_name;
	std::cout << "Enter Last Name: " << std::endl;
	std::cin >> this->last_name;
	std::cout << "Enter a Nickname: " << std::endl;
	std::cin >> this->nickname;
	std::cout << "Enter a Phone number: " << std::endl;
	std::cin >> this->phone;
	std::cout << "Just for fun, what is your darkest secret?? " << std::endl;
	std::cin >> this->d_secret;
	std::cout << std::endl;
}

void	Contact::DeleteContact(void)
{
	delete[] this->first_name;
	delete[] this->last_name;
	delete[] this->nickname;
	delete[] this->phone;
	delete[] this->d_secret;
}

char	*Contact::ReturnFname(void) const
{
	return (this->first_name);
}

char	*Contact::ReturnLname(void) const
{
	return (this->last_name);
}

char	*Contact::ReturnNick(void) const
{
	return (this->nickname);
}

char	*Contact::ReturnPhone(void) const
{
	return (this->phone);
}

char	*Contact::ReturnSecret(void) const
{
	return (this->d_secret);
}
