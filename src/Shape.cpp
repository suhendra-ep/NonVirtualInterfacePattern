#include "../inc/Shape.h"

namespace Mitrais
{
	Shape::Shape()
	{
	}

	Shape::~Shape()
	{
	}

	void Shape::printArea()
	{
		cout << "The area of " << getType() << " is " << getArea() << endl;
	}

	std::string Shape::getType()
	{
		return "Shape";
	}
}  // namespace Mitrais
