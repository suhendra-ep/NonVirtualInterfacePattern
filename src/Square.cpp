/*
 * Square.cpp
 *
 *  Created on: Jul 21, 2016
 *      Author: developer
 */

#include "../inc/Square.h"

using namespace std;
namespace Mitrais
{
	Square::Square(double width)
		: _width(width)
	{
	}

	Square::~Square()
	{
	}

	std::string Square::getType()
	{
		return "Square";
	}

	double Square::getArea()
	{
		return _width * _width;
	}
}
