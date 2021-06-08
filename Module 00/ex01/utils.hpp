/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 12:26:41 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/05 18:08:32 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

# include <iostream>
# include <iomanip>
# include "Contact.hpp"

int				isAllNum(std::string str);
std::string		resizeString(std::string str);
int				availableIndex(Contact contact[8], int index);
void			printSearchResult(Contact contact[8]);
std::string		trimString(std::string str);

#endif
