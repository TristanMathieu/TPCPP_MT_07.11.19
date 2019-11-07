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
void CPoint::affichage()
{
	
	cout << "X : " << nX << "// Y : " << nY << endl;
	cout << "- - - - -" << endl;
}
//homothétie et autres rotations
void CPoint::homothetie(CPoint ptCentreO, CPoint ptPointM, float argumentb)
{
	//déclaration var provisoires
	float fProvX;
	float fProvY;

	//init var prov
	fProvX = (ptPointM.getX() - ptCentreO.getX())*argumentb;
	fProvY = (ptPointM.getY() - ptCentreO.getY())*argumentb;

	//déplacement à partir du centre O du point actuel
	this->nX = ptCentreO.getX() + fProvX;
	this->nY = ptCentreO.getY() + fProvY;
	
}

//rotation
void CPoint::rotation(float argumentb)
{
	if (argumentb == 90 || argumentb == -270) {
		nY = -nY;
	} else {
		if (argumentb == 180 || argumentb == -180) {
			nX = -nX;
			nY = -nY;
		} else {
			if (argumentb == 270 || argumentb == -90) {
				nX = -nX;
			} else {
				cout << "Argument de rotation Invalide. Essayer 90, 180, 270 ou leurs négatifs!";
			}
		}
	}
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
