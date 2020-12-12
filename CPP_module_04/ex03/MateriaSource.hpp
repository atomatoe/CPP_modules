/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 16:54:53 by atomatoe          #+#    #+#             */
/*   Updated: 2020/12/08 16:32:12 by atomatoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
    int m_count;
    AMateria **pull;
public:
    MateriaSource();
    ~MateriaSource();
    MateriaSource(const MateriaSource &type);
    MateriaSource & operator=(const MateriaSource &);
    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
};


#endif