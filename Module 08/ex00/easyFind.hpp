/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 14:17:20 by iounejja          #+#    #+#             */
/*   Updated: 2021/09/01 15:34:58 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>

template<typename T>
int		easyFind(T container, int value) {=>
	if (std::find(container.begin(), container.end(), value) != container.end())
		return (1);
	return (0);
}

#endif