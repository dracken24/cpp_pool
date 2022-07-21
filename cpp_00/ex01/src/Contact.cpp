/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:09:27 by nadesjar          #+#    #+#             */
/*   Updated: 2022/07/21 12:59:29 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

Contact::Contact()
{
	// this->test = 22;
	
	// std::cout << "Entrez un contact" << std::endl;
	// std::cin >> this->fam_name;
	// std::cout << "Vous avez entré: " << this->fam_name << std::endl;
	// std::cout << "this.test: " << this->test << std::endl;
	
	return;
}

Contact	Contact::Add(void)
{
	Contact	cont;

	cont.fam_name = new char[64];
	cont.last_name = new char[64];
	cont.nickname = new char[64];
	cont.d_secret = new char[128];
	cont.phone = new int[16];

	// this->test = 42;
	// std::cin >> Contact::f_name;
	// std::cout << "Vous avez entrez: " << Contact::f_name << std::endl;
	// std::cout << "ft_Add: " << std::endl;
	// std::cout << "this_2: " << this->test << std::endl;

	return (cont);
}

Contact::~Contact(void)
{
	std::cout << "Destruct Contact" << std::endl;
}
