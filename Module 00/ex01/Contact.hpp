/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 16:14:55 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/15 13:24:44 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include "utils.hpp"

class Contact
{
	std::string		_firstName;
	std::string		_lastName;
	std::string		_nickname;
	std::string		_login;
	std::string		_postalAddress;
	std::string		_emailAddress;
	std::string		_phoneNumber;
	std::string		_birthdayDate;
	std::string		_favoriteMeal;
	std::string		_underwearColor;
	std::string		_darkestSecret;

	static int		_instanceNumber;
	int				_index;

	public:

		Contact(void);
		~Contact(void);

		void			add(void);
		void			printInfo(void) const;

		void			setFirstName(std::string firstName);
		std::string		getFirstName(void) const;

		void			setLastName(std::string LastName);
		std::string		getLastName(void) const;

		void			setNickname(std::string nickname);
		std::string		getNickname(void) const;

		void			setLogin(std::string login);
		std::string		getLogin(void) const;

		void			setPostalAddress(std::string postalAddress);
		std::string		getPostalAddress(void) const;

		void			setEmailAddress(std::string emailAddress);
		std::string		getEmailAddress(void) const;

		void			setPhoneNumber(std::string phoneNumber);
		std::string		getPhoneNumber(void) const;

		void			setBirthdayDate(std::string birthdayDate);
		std::string		getBirthdayDate(void) const;

		void			setFavoriteMeal(std::string favoriteMeal);
		std::string		getFavoriteMeal(void) const;

		void			setUnderwearColor(std::string underwearColor);
		std::string		getUnderwearColor(void) const;

		void			setDarkestSecret(std::string darkestSecret);
		std::string		getDarkestSecret(void) const;

		static int		getInstanceNumber(void);
		static void		incrementInstanceNumber(void);

		void			setIndex(int index);
		int				getIndex(void) const;
};



#endif