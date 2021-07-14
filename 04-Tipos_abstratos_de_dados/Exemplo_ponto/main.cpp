#include <iostream>
#include "Point.h"
#include <string>
using namespace std;

int main()
{
	Point p2(0.0, 7.0), p3(0.0, 0.0); // Instanciacao de dois objetos do tipo Point

	p2.print();
	cout << endl;
	p3.print();
	cout << endl;

	cout << "Distancia entre p2 e p3: " << p2.distance(p3) << endl;

	Point *p4; // Um ponteiro do tipo Point

	p4 = new Point(7.8, 6.5); // Instanciacao de mais um objeto do tipo Point

	cout << "Ponto p4: (" << p4->getX() << "," << p4->getY() << ")" << endl;

	delete p4; // libera memoria que foi alocada com 'new'

	return 0;
}