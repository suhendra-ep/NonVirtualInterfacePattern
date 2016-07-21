/*============================================================================
* Name        : Non Virtual Interface Pattern
* Author      : I Komang Suhendra Eka Putra
* Version     :
* Copyright   :
* Description : Implementation of Non Virtual Interface Pattern in C++.
* 				This project created for C++ Bootcamp Training in Mitrais.
==============================================================================*/

#include <iostream>
#include "inc/Square.h"
#include "inc/Rectangle.h"
#include "inc/Triangle.h"

using namespace std;
using namespace Mitrais;
int main(int argc, char* argv[])
{
	// Square
	Square square(8.0);
	square.printArea();

	// Rectangle
	Rectangle rectangle(5, 9);
	rectangle.printArea();

	// Triangle
	Triangle triangle(7.0, 9.4);
	triangle.printArea();

	return 0;
}
