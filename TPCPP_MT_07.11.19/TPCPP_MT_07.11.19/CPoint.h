#pragma once
class CPoint
{
private:
	float nX;
	float nY;
	static int nbPoint;

public:
	//Constructeur sans parametres
	CPoint();
	//CPoint(float nX, float nY);

	void afficher();

	void deplacer(float nX, float nY);
};