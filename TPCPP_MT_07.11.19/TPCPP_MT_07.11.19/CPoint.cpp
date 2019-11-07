#include "CPoint.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

float CPoint::getX()
{
	return nX;
}

float CPoint::getY()
{
	return nY;
}

void CPoint::deplace(float nAddX, float nAddY)
{
	this->nX += nAddX;
	this->nY += nAddY;

}

void CPoint::affichage()
{
	cout << "X : " << nX << endl;
	cout << "Y : " << nY << endl;
}

void CPoint::setX(float nX)
{
	this->nX = nX;
}

void CPoint::setY(float nY)
{
	this->nY = nY;
}

void CPoint::init(float nX, float nY)
{
	this->nX = nX;
	this->nY = nY;
}

CPoint::CPoint()
{
	this->nX = 0;
	this->nY = 0;
}

CPoint::CPoint(float nX, float nY)
{
	this->nX = nX;
	this->nY = nY;
}
