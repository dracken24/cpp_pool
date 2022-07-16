/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:02:34 by nadesjar          #+#    #+#             */
/*   Updated: 2022/07/16 15:44:05 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
public:
	Contact(void);
	// ~Contact(void);

	// int		test;
	
	void	Add(void);
	void	Search(void);
	void	Exit(void);
	;

private:
	int 	test;
	char	f_name[512];
	char	*l_name;
	char	*nickname;
	int		phone;
	char	*d_secret;
};

#endif