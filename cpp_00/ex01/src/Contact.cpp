/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:09:27 by nadesjar          #+#    #+#             */
/*   Updated: 2022/07/16 13:39:32 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

Contact::Contact(char test[])
{
	(void)test;
	// std::cin >> Contact::f_name;
	// std::cout << "Vous avez entrez: " << Contact::f_name << std::endl;
	// std::cout << "TEST: " << test << std::endl;
}

void	Contact::Add(void)
{
	std::cin >> Contact::f_name;
	std::cout << "Vous avez entrez: " << Contact::f_name << std::endl;
	// std::cout << "TEST: " << test << std::endl;
}
