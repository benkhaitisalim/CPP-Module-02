/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 17:52:31 by bsalim            #+#    #+#             */
/*   Updated: 2025/11/24 21:47:44 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

Fixed::Fixed():fixedPointNumberValue(0)
{
}
Fixed::Fixed(const Fixed& othernum)
{
    fixedPointNumberValue = othernum.fixedPointNumberValue;
}
Fixed::Fixed(float num)
{
    fixedPointNumberValue = roundf(num * 256.f);
}
Fixed::Fixed(int num)
{
    fixedPointNumberValue = num * 256;
}

Fixed& Fixed::operator=(const Fixed& othernum)
{
    if(this != &othernum)
    {
        fixedPointNumberValue = othernum.fixedPointNumberValue; 
    }
    return *this;
}

Fixed::~Fixed()
{
}

int Fixed::getRawBits( void ) const
{
    return fixedPointNumberValue;
}
void Fixed::setRawBits(int const raw)
{
    fixedPointNumberValue = raw;
}

float Fixed::toFloat( void ) const
{
    return static_cast <float> (fixedPointNumberValue / 256.0f);
}
int Fixed::toInt( void ) const
{
    return (fixedPointNumberValue / 256);
}

bool Fixed::operator>(const Fixed& othernum) const
{
    return fixedPointNumberValue > othernum.fixedPointNumberValue;
}
bool Fixed::operator<(const Fixed& othernum) const
{
    return fixedPointNumberValue < othernum.fixedPointNumberValue;
}
bool Fixed::operator>=(const Fixed& othernum) const
{
    return fixedPointNumberValue >= othernum.fixedPointNumberValue;
}
bool Fixed::operator<=(const Fixed& othernum) const
{
    return fixedPointNumberValue <= othernum.fixedPointNumberValue;
}
bool Fixed::operator!=(const Fixed& othernum) const
{
    return fixedPointNumberValue != othernum.fixedPointNumberValue;
}
bool Fixed::operator==(const Fixed& othernum) const
{
    return fixedPointNumberValue == othernum.fixedPointNumberValue;
}

Fixed Fixed::operator+(const Fixed& othernum) const
{
    Fixed result ;
    result.setRawBits(fixedPointNumberValue + othernum.fixedPointNumberValue); 
    return (result);
}
Fixed Fixed::operator*(const Fixed& othernum) const
{
    Fixed result;
    result.setRawBits((fixedPointNumberValue * othernum.fixedPointNumberValue) / 256); 
    return (result );
}
Fixed Fixed::operator/(const Fixed& othernum) const
{
    Fixed result;
    result.setRawBits((fixedPointNumberValue * 256) / othernum.fixedPointNumberValue); 
    return (result);
}
Fixed Fixed::operator-(const Fixed& othernum) const
{
    Fixed result;
    result.setRawBits(fixedPointNumberValue - othernum.fixedPointNumberValue); 
    return (result);
}
Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
    fixedPointNumberValue++;
    return temp;
    
}
Fixed& Fixed::operator++()
{
    ++fixedPointNumberValue;
    return *this;
}
Fixed Fixed::operator--(int)
{
    Fixed temp = *this;
    fixedPointNumberValue--;
    return temp;
}
Fixed& Fixed::operator--()
{
    --fixedPointNumberValue;
    return *this;
}
Fixed& Fixed::min(Fixed& par1, Fixed& par2)
{
    return (par1 < par2)? par1 : par2;
}
const Fixed& Fixed::max(const Fixed& par1, const Fixed& par2)
{
    return (par1 > par2)? par1 : par2;
}

Fixed& Fixed::max(Fixed& par1,Fixed& par2)
{
    return (par1 > par2) ? par1 : par2;
}
const Fixed& Fixed::min(const Fixed& par1, const Fixed& par2) 
{
    return (par1 < par2) ? par1 : par2;
}

std::ostream&  operator<<(std::ostream& os, const Fixed& a)
{
    os << a.toFloat();
    return os;
}
