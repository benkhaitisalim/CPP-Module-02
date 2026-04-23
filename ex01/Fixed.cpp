/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 17:52:31 by bsalim            #+#    #+#             */
/*   Updated: 2025/11/22 15:51:54 by bsalim           ###   ########.fr       */
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
Fixed::Fixed(float num)
{
    std::cout << "Float constructor called" << std::endl;
    fixedPointNumberValue = roundf(num * 256.f);
}
Fixed::Fixed(int num)
{
    std::cout << "int constructor called" << std::endl;
    fixedPointNumberValue = num * 256;
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
float Fixed::toFloat( void ) const
{
    return static_cast <float> (fixedPointNumberValue / 256.0f);
}
int Fixed::toInt( void ) const
{
    return fixedPointNumberValue / 256;
}
