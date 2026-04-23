/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 17:52:31 by bsalim            #+#    #+#             */
/*   Updated: 2025/11/25 11:42:39 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

Fixed::Fixed():fixedPointNumberValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed& othernum)
{
    std::cout <<  "Copy constructor called"  << std::endl;
    fixedPointNumberValue = othernum.fixedPointNumberValue;
}
Fixed& Fixed::operator=(const Fixed& othernum)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &othernum)
    {
        fixedPointNumberValue = othernum.fixedPointNumberValue; 
    }
    return *this;
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return fixedPointNumberValue;
}
void Fixed::setRawBits( int const raw )
{
    fixedPointNumberValue = raw;
}
