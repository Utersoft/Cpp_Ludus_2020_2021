#pragma once

/*CPoint : le C = Class*/



class CPoint {

//encapsulation :
	//public
	//private
	//protected
protected :
//Les éléments protégés sont accessibles par des enfants de la class ou des amis de la class


private :
//tout ce qui est après ça est privé, c'est le mode par défaut

	//Données membres (ou attribut / propriété)
	int n_x;
	int n_y;

public :
//Tout ce qui esrt après ça est publique

	//Fonctions membres (ou procédures)
	//void afficheLog()const;
	//const = la méthode ne modifie pas les données qu'elle manipule

	//Accesseurs
	int getX()const;
	int getY()const;

	//Mutateurs
	void setX(int n_x);
	void setY(int n_y);


};