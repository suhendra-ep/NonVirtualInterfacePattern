/*
 * Rectangle.cpp
 *
 *  Created on: Jul 21, 2016
 *      Author: developer
 */

#include "../inc/Rectangle.h"

namespace Mitrais
{
	Rectangle::Rectangle(double width, double height)
		: _width(width), _height(height)
	{
	}

	Rectangle::~Rectangle()
	{
	}

	double Rectangle::getArea()
	{
		return _width *_height;
	}
}


