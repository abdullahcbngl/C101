#include <stdio.h>

/* Aritmetik Operat�rler 

	X + Y : Toplama 
	X - Y : ��karma
	X * Y : �arpma 
	X / Y : B�lme 
	X % Y : X in Y ile b�l�m�nden kalan�n� verir.
	
	Atama, Art�rma, Azaltma i�lemleri
	
	int x = 5;
	int y = 7;
	
	x = y; 
	y = x +1;
	
	Art�rma-Azaltma  
	
	postfix = i++
	prefix = ++i;
	*/

int main(){
	int x = 5;
	int y = 7;
	
	printf("x = %d\n y = %d", x++, ++y);
	printf("x = %d",x);
	
	//x = y; 
	//y = x +1;
	
	//printf("x = %d\n y = %d", x, y);
	
	return 0;
}
