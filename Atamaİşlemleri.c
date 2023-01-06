#include <stdio.h>

/* Aritmetik Operatörler 

	X + Y : Toplama 
	X - Y : Çýkarma
	X * Y : Çarpma 
	X / Y : Bölme 
	X % Y : X in Y ile bölümünden kalanýný verir.
	
	Atama, Artýrma, Azaltma iþlemleri
	
	int x = 5;
	int y = 7;
	
	x = y; 
	y = x +1;
	
	Artýrma-Azaltma  
	
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
