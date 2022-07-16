/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:09:27 by nadesjar          #+#    #+#             */
/*   Updated: 2022/07/16 15:48:02 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

Contact::Contact()
{
	this->test = 22;
	
	std::cout << "Entrez un contact" << std::endl;
	std::cin >> this->f_name;
	std::cout << "Vous avez entré: " << this->f_name << std::endl;
	std::cout << "this.test: " << this->test << std::endl;

	return;
}

void	Contact::Add(void)
{
	this->test = 42;
	// std::cin >> Contact::f_name;
	// std::cout << "Vous avez entrez: " << Contact::f_name << std::endl;
	std::cout << "ft_Add: " << std::endl;
	std::cout << "this_2: " << this->test << std::endl;

	return;
}
