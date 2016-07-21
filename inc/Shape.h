/*
 * Shape.h
 *
 *  Created on: Jul 21, 2016
 *      Author: developer
 */

#ifndef INC_SHAPE_H_
#define INC_SHAPE_H_

#include <iostream>
#include <cstring>

using namespace std;

namespace Mitrais
{
	class Shape
	{
		public:
			Shape();
			virtual ~Shape();
			void printArea();
		protected:
			virtual double getArea() = 0;
			virtual std::string getType();
	};
}



#endif /* INC_SHAPE_H_ */
