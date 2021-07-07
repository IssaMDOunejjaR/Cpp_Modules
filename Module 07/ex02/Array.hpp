/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 19:58:50 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/07 20:20:09 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class	Array
{
	T*	_array;
	int	_index;

	public:
		Array<T>(void) {
			this->_array = NULL;
			this->_index = 0;
		}

		Array<T>(unsigned int n) {
			this->_array = new T[n];
			this->_index = n - 1;
			for (int i = 0; i < n; i++)
				this->_array[i] = 0;
		}

		Array<T>(Array<T> const & instance) {
			*this = instance;
		}

		~Array<T>(void) {
			delete [] this->_array;
		}

		Array<T>&	operator=(Array<T> const & instance) {
			delete [] this->_array;
			this->_array = new T[instance.size()];
			for (int i = 0; i < instance.size(); i++)
				this->_array[i] = instance._array[i];
			return (*this);
		}

		T&		operator[](unsigned int n) {
			if (n > this->_index) {
				std::cout << "index out of bounds" << std::endl;
				return (this->_array[0]);
			}
			return (this->_array[n]);
		}

		int		size(void) const {
			return (this->_index + 1);
		}
};

#endif