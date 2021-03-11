//#include "tPoint.h"
#include "CPoint.h"
#include <stdio.h>

void afficheLog(int n_value);
void afficheLog(float flt_value);


int main() {

	/*tPoint p;

	p.n_x = 0;
	p.n_y = 0;

	afficheLog(p);*/

	//Instance de la classe CPoint
	CPoint p;

	p.setX(0);
	p.setY(0);

	//p.afficheLog();

	printf("X : ");
	afficheLog(p.getX());
	printf("Y : ");
	afficheLog(p.getY());

	float flt_f = 12.2;
	afficheLog(flt_f);

	return 0;
}


void afficheLog(int n_value) {
	printf("%d.\n", n_value);
}


void afficheLog(float flt_value) {
	printf("%f.\n", flt_value);
}