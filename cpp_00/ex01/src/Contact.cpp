/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:09:27 by nadesjar          #+#    #+#             */
/*   Updated: 2022/07/24 16:00:51 by nadesjar         ###   ########.fr       */
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
	return;
}

Contact::~Contact(void)
{
	// std::cout << "Destruct Contact" << std::endl;
	return;
}
