/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 10:59:16 by bsalim            #+#    #+#             */
/*   Updated: 2025/11/24 21:46:55 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include  <cmath>
class Fixed
{
    private:
    int fixedPointNumberValue;
    static const int TheNumberOfFractionalBits = 8;
    public :
    Fixed();
    Fixed(float num);
    Fixed(int num);
    Fixed(const Fixed& othernum);
    Fixed& operator=(const Fixed& othernum);
    bool operator>(const Fixed& othernum) const;
    bool operator<(const Fixed& othernum) const;
    bool operator<=(const Fixed& othernum) const;
    bool operator>=(const Fixed& othernum) const;
    bool operator!=(const Fixed& othernum) const;
    bool operator==(const Fixed& othernum) const;
    Fixed operator+(const Fixed& othernum) const;
    Fixed operator/(const Fixed& othernum) const;
    Fixed operator*(const Fixed& othernum) const;
    Fixed operator-(const Fixed& othernum) const;

    Fixed operator++(int) ;
    Fixed operator--(int) ;
    Fixed& operator++();
    Fixed& operator--();

    static Fixed& min(Fixed& par1, Fixed& par2);
    static const Fixed& min(const Fixed& par1, const Fixed& par2);
    static Fixed& max(Fixed& par1, Fixed& par2);
    static const Fixed& max(const Fixed& par1, const Fixed& par2);

    ~Fixed();
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;
};

std::ostream&  operator<<(std::ostream& os, const Fixed& a);
#endif