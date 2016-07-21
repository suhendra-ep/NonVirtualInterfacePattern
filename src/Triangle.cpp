/*
 * Triangle.cpp
 *
 *  Created on: Jul 21, 2016
 *      Author: developer
 */

#include "../inc/Triangle.h"

namespace Mitrais
{
	Triangle::Triangle(double width, double height)
		: _width(width), _height(height)
	{
	}

	Triangle::~Triangle()
	{
	}

	std::string Triangle::getType()
	{
		return "Triangle";
	}

	double Triangle::getArea()
	{
		return 0.5 * _width * _height;
	}
}
