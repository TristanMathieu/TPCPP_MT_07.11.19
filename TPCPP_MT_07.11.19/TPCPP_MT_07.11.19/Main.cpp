#include <iostream>
#include <cstdlib>
#include "CPoint.h"

using namespace std;


int main()
{
	CPoint ptMonPoint(3, 5);
	CPoint ptDeusiPoint(5, 8);
	CPoint ptCentreO(1, 3);

	cout << "Pt a modifier" << endl;
	ptMonPoint.affichage();
	cout << "Pt M" << endl;
	ptDeusiPoint.affichage();
	cout << "Centre O" << endl;
	ptCentreO.affichage();
	
	ptMonPoint.homothetie(ptCentreO, ptDeusiPoint, 3);
	cout << "Pt modifie" << endl;
	ptMonPoint.affichage();

	ptMonPoint.rotation(90);
	cout << "Pt modifie par rotation" << endl;
	ptMonPoint.affichage();
	

	system("pause");
	return 0;
}