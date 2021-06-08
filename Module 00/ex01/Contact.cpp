/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 18:36:49 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/08 12:04:25 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int		Contact::_instanceNumber = 0;

Contact::Contact (void)
{
	return ;
}

Contact::~Contact (void)
{
	return ;
}

void	Contact::setFirstName(std::string firstName)
{
	this->_firstName = firstName;
	return ;
}

void	Contact::add(void)
{
	std::string		input;
	
	std::cout << "First Name: ";
	getline(std::cin, input);
	if (input.compare("") != 0)
		input = trimString(input);
	this->setFirstName(input);

	std::cout << "Last Name: ";
	getline(std::cin, input);
	if (input.compare("") != 0)
		input = trimString(input);
	this->setLastName(input);

	std::cout << "Nickname: ";
	getline(std::cin, input);
	if (input.compare("") != 0)
		input = trimString(input);
	this->setNickname(input);

	std::cout << "Login: ";
	getline(std::cin, input);
	if (input.compare("") != 0)
		input = trimString(input);
	this->setLogin(input);

	std::cout << "Postal Address: ";
	getline(std::cin, input);
	if (input.compare("") != 0)
		input = trimString(input);
	this->setPostalAddress(input);

	std::cout << "Email Addres: ";
	getline(std::cin, input);
	if (input.compare("") != 0)
		input = trimString(input);
	this->setEmailAddress(input);

	std::cout << "Phone Number: ";
	getline(std::cin, input);
	if (input.compare("") != 0)
		input = trimString(input);
	this->setPhoneNumber(input);

	std::cout << "Birthday Date: ";
	getline(std::cin, input);
	if (input.compare("") != 0)
		input = trimString(input);
	this->setBirthdayDate(input);

	std::cout << "Favorite Meal: ";
	getline(std::cin, input);
	if (input.compare("") != 0)
		input = trimString(input);
	this->setFavoriteMeal(input);

	std::cout << "Underwear Color: ";
	getline(std::cin, input);
	if (input.compare("") != 0)
		input = trimString(input);
	this->setUnderwearColor(input);

	std::cout << "Darkest Secret: ";
	getline(std::cin, input);
	if (input.compare("") != 0)
		input = trimString(input);
	this->setDarkestSecret(input);

	this->setIndex(Contact::getInstanceNumber());
	Contact::incrementInstanceNumber();
}

void	Contact::printInfo(void) const
{
	std::cout << "First Name: " << this->getFirstName() << std::endl;
	std::cout << "Last Name: " << this->getLastName() << std::endl;
	std::cout << "Nickname: " << this->getNickname() << std::endl;
	std::cout << "Login: " << this->getLogin() << std::endl;
	std::cout << "Postal Address: " << this->getPostalAddress() << std::endl;
	std::cout << "Email Address: " << this->getEmailAddress() << std::endl;
	std::cout << "Phone Number: " << this->getPhoneNumber() << std::endl;
	std::cout << "Birthday Date: " << this->getBirthdayDate() << std::endl;
	std::cout << "Favorite Meal: " << this->getFavoriteMeal() << std::endl;
	std::cout << "Underwear Color: " << this->getUnderwearColor() << std::endl;
	std::cout << "Darkest Secret: " << this->getDarkestSecret() << std::endl;
}

std::string		Contact::getFirstName(void) const
{
	return (this->_firstName);
}

void	Contact::setLastName(std::string lastName)
{
	this->_lastName = lastName;
	return ;
}

std::string		Contact::getLastName(void) const
{
	return (this->_lastName);
}

void	Contact::setNickname(std::string nickname)
{
	this->_nickname = nickname;
	return ;
}

std::string		Contact::getNickname(void) const
{
	return (this->_nickname);
}

void	Contact::setLogin(std::string login)
{
	this->_login = login;
	return ;
}

std::string		Contact::getLogin(void) const
{
	return (this->_login);
}

void	Contact::setPostalAddress(std::string postalAddress)
{
	this->_postalAddress = postalAddress;
	return ;
}

std::string		Contact::getPostalAddress(void) const
{
	return (this->_postalAddress);
}

void	Contact::setEmailAddress(std::string emailAddress)
{
	this->_emailAddress = emailAddress;
	return ;
}

std::string		Contact::getEmailAddress(void) const
{
	return (this->_emailAddress);
}

void	Contact::setPhoneNumber(std::string phoneNumber)
{
	this->_phoneNumber = phoneNumber;
	return ;
}

std::string		Contact::getPhoneNumber(void) const
{
	return (this->_phoneNumber);
}

void	Contact::setBirthdayDate(std::string birthdayDate)
{
	this->_birthdayDate = birthdayDate;
	return ;
}

std::string		Contact::getBirthdayDate(void) const
{
	return (this->_birthdayDate);
}

void	Contact::setFavoriteMeal(std::string favoriteMeal)
{
	this->_favoriteMeal = favoriteMeal;
	return ;
}

std::string		Contact::getFavoriteMeal(void) const
{
	return (this->_favoriteMeal);
}

void	Contact::setUnderwearColor(std::string underwearColor)
{
	this->_underwearColor = underwearColor;
	return ;
}

std::string		Contact::getUnderwearColor(void) const
{
	return (this->_underwearColor);
}

void	Contact::setDarkestSecret(std::string darkestSecret)
{
	this->_darkestSecret = darkestSecret;
	return ;
}

std::string		Contact::getDarkestSecret(void) const
{
	return (this->_darkestSecret);
}

int		Contact::getInstanceNumber(void)
{
	return (Contact::_instanceNumber);
}

void	Contact::incrementInstanceNumber(void)
{
	Contact::_instanceNumber += 1;
	return ;
}

void	Contact::setIndex(int index)
{
	this->_index = index;
	return ;
}

int		Contact::getIndex(void) const
{
	return (this->_index);
}
