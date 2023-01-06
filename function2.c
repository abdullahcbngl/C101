#include <stdio.h>

void faktoriyel(int sayi){
	int faktoriyel = 1;
	for(;sayi > 0; sayi--){
		faktoriyel *= sayi;
	}
	
	printf("Faktoriyel : %d", faktoriyel);
}

int main(){
	int sayi1 = 6;
	
	int sonuc = faktoriyel(sayi1);
	printf("Sonuc = %d", sonuc);
	
	return 0;
}
