/*
 * Rectangle.h
 *
 *  Created on: Jul 21, 2016
 *      Author: developer
 */

#ifndef INC_RECTANGLE_H_
#define INC_RECTANGLE_H_

#include "Shape.h"

using namespace std;

namespace Mitrais
{
	class Rectangle : public Shape
	{
		public:
			Rectangle(double width, double height);
			~Rectangle();
		private:
			double _width, _height;
			double getArea();
	};
}


#endif /* INC_RECTANGLE_H_ */
