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

	//Init
	void init(float nX, float nY);

	//-- set/get --
	//Getter
	float getX();
	float getY();

	//Setter
	void setX(float nX);
	void setY(float nY);

	

	//-- Methodes --
	//Deplacement
	void deplace(float nAddX, float nAddY);

	//Abscisse et ordonnée
	float abscisse();
	float ordonnee();
};