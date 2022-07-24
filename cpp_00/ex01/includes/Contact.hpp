/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:02:34 by nadesjar          #+#    #+#             */
/*   Updated: 2022/07/23 21:01:42 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
public:
	Contact(void);
	~Contact(void);

	Contact	Add(void);
	void	Search(int nbr);
	void	Exit(void);
	;

	char	*first_name;
	char	*last_name;
	char	*nickname;
	char	*phone;
	char	*d_secret;
	Contact *tab;
};

#endif