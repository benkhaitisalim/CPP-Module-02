/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 10:59:16 by bsalim            #+#    #+#             */
/*   Updated: 2025/11/22 00:03:21 by bsalim           ###   ########.fr       */
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
    ~Fixed();
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;
};
#endif