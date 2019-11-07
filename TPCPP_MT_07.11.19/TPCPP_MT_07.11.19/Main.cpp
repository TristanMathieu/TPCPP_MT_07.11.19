#include <iostream>
#include <cstdlib>
#include "CPoint.h"

using namespace std;


int main()
{
	CPoint ptMonPoint(0, 10);
	
	cout << "X : " << ptMonPoint.getX() << endl;
	cout << "Y : " << ptMonPoint.getY() << endl;

	ptMonPoint.deplace(0, 30);

	cout << "X : " << ptMonPoint.abscisse() << endl;
	cout << "Y : " << ptMonPoint.ordonnee() << endl;
	
	

	system("pause");
	return 0;
}