/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tmp.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:51:13 by aobshatk          #+#    #+#             */
/*   Updated: 2025/10/20 12:47:56 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TMP_H
#define TMP_H

#include <iostream>

namespace myNames
{
template <typename T> T min(T a, T b)
{
	return (a < b ? a : b);
}

template <typename T> T max(T a, T b)
{
	return (a > b ? a : b);
}

template <typename T> void swap(T &a, T &b)
{
	T	temp;

	temp = a;
	a = b;
	b = temp;
}

} // namespace myNames


#endif
