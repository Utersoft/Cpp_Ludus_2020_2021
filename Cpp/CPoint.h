#pragma once

/*CPoint : le C = Class*/



class CPoint {

//encapsulation :
	//public
	//private
	//protected
protected :
//Les �l�ments prot�g�s sont accessibles par des enfants de la class ou des amis de la class


private :
//tout ce qui est apr�s �a est priv�, c'est le mode par d�faut

	//Donn�es membres (ou attribut / propri�t�)
	int n_x;
	int n_y;

public :
//Tout ce qui esrt apr�s �a est publique

	//Fonctions membres (ou proc�dures)
	//void afficheLog()const;
	//const = la m�thode ne modifie pas les donn�es qu'elle manipule

	//Accesseurs
	int getX()const;
	int getY()const;

	//Mutateurs
	void setX(int n_x);
	void setY(int n_y);


};