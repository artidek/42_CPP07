/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 12:47:02 by aobshatk          #+#    #+#             */
/*   Updated: 2025/10/22 14:40:37 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H

#include <exception>

template <class T> 
class Array
{
  private:
	unsigned int _size;
	T *p;
	class IndexOutOfBounds : public std::exception
	{
		public:
			IndexOutOfBounds();
			const char *what() const throw();
	};
  public:
	Array(void);
	Array(unsigned int size);
	Array(const Array &copy);
	~Array();
	Array &operator=(Array const &copy);
	T &operator[](unsigned int i);
	const T &operator[](unsigned int i) const;
	unsigned int size() const;
};

#include "Array.tpp"

#endif