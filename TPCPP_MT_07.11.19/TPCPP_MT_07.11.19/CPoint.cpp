#include "CPoint.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int CPoint::nbPoint = 0;

CPoint::CPoint()
{
	this->nX = 0;
	this->nY = 0;
	nbPoint++;
}


void CPoint::afficher()
{
	cout << "X : " << this->nX << endl;
	cout << "Y : " << this->nY << endl;
	cout << "NB Points : " << nbPoint << endl;
}

void CPoint::deplacer(float nX, float nY)
{
	this->nX += nX;
	this->nY += nY;
}


