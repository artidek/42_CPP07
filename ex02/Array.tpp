/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 12:46:53 by aobshatk          #+#    #+#             */
/*   Updated: 2025/10/22 20:38:29 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <class T> Array<T>::IndexOutOfBounds::IndexOutOfBounds()
{
}
template <class T> const char *Array<T>::IndexOutOfBounds::what() const throw()
{
	return ("indexOutOfBoundException");
}
template <class T> Array<T>::Array(void) : _size(0), p(0)
{
}
template <class T> Array<T>::Array(unsigned int size) : _size(size),
	p(new T[size])
{
}
template <class T> Array<T>::Array(const Array &copy) : _size(copy.size()), p(0)
{
	if (_size > 0)
	{
		p = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			p[i] = copy[i];
	}
}
template <class T> Array<T>::~Array()
{
	delete[] p;
}
template <class T> Array<T> &Array<T>::operator=(Array const &copy)
{
	if (this != &copy)
	{
		delete[] p;
		_size = copy.size();
		if (_size > 0)
		{
			p = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				p[i] = copy[i];
		}
		else
			p = 0;
	}
	return (*this);
}

template <class T> T &Array<T>::operator[](unsigned int i)
{
	if (i >= _size)
		throw IndexOutOfBounds();
	else
		return (p[i]);
}
template <class T> const T &Array<T>::operator[](unsigned int i) const
{
	if (i >= _size)
		throw IndexOutOfBounds();
	else
		return (p[i]);
}
template <class T> unsigned int Array<T>::size() const
{
	return (_size);
}
