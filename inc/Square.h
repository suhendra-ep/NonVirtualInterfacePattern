/*
 * Square.h
 *
 *  Created on: Jul 21, 2016
 *      Author: developer
 */

#include "Shape.h"

namespace Mitrais
{
	class Square : public Shape
	{
		public:
			Square(double width);
			~Square();
		private:
			double _width;
			double getArea();
			std::string getType();
	};
}
