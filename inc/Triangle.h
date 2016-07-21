/*
 * Triangle.h
 *
 *  Created on: Jul 21, 2016
 *      Author: developer
 */

#ifndef INC_TRIANGLE_H_
#define INC_TRIANGLE_H_

#include "Shape.h"

using namespace std;
namespace Mitrais
{
	class Triangle : public Shape
	{
		public:
			Triangle(double width, double height);
			~Triangle();

		private:
			double _width, _height;
			std::string getType();
			double getArea();
	};
}


#endif /* INC_TRIANGLE_H_ */
