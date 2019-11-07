#include "CPoint.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;



void CPoint::deplace(float nAddX, float nAddY)
{
	this->nX += nAddX;
	this->nY += nAddY;

}

//abscisse et Ordonnée
float CPoint::abscisse()
{
	return nX;
}

float CPoint::ordonnee()
{
	return nY;
}

//-- set et get --
void CPoint::setX(float nX)
{
	this->nX = nX;
}

void CPoint::setY(float nY)
{
	this->nY = nY;
}

float CPoint::getX()
{
	return nX;
}

float CPoint::getY()
{
	return nY;
}

//Init et constructeurs
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
