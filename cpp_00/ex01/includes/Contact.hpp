/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:02:34 by nadesjar          #+#    #+#             */
/*   Updated: 2022/07/21 20:58:34 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "../includes/PhoneBook.hpp"
# include <iostream>

class Contact
{
public:
	Contact(void);
	~Contact(void);

	Contact	Add(void);
	void	Search(PhoneBook *tab);
	void	Exit(void);
	;

	char	*first_name;
	char	*last_name;
	char	*nickname;
	char	*phone;
	char	*d_secret;
};

#endif