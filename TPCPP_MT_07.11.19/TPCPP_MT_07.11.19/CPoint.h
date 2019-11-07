#pragma once
//Point dans un plan
class CPoint
{
private:
	float nX;
	float nY;

public:

	//Constructeurs
	CPoint();
	CPoint(float nX, float nY);

	//-- set/get --
	//Getter
	float getX();
	float getY();

	//Setter
	void setX(float nX);
	void setY(float nY);

	//Init
	void init(float nX, float nY);

	//-- Methodes --
	//Deplacement
	void deplace(float nAddX, float nAddY);

	//Affichage
	void affichage();
};