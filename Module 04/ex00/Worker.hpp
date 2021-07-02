/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Worker.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 10:20:36 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/02 10:30:39 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WORKER_HPP
# define WORKER_HPP

# include "Victim.hpp"

class	Worker: public Victim
{
	public:
		Worker(void);
		Worker(std::string name);
		Worker(Worker const & instance);
		virtual ~Worker(void);

		Worker&		operator=(Worker const & instance);

		void		getPolymorphed(void) const;
};

#endif