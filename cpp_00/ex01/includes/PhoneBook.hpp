/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:08:04 by nadesjar          #+#    #+#             */
/*   Updated: 2022/07/23 20:48:01 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>

class PhoneBook
{
public:
	PhoneBook(void);
	~PhoneBook(void);

	int		ChooseAction(void);

	char 	*cmd;
	int		nbr_ct;
};

#endif