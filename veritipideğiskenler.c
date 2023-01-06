#include <stdio.h>

// Yorum Sat�rlar� 
//	Tekli Yorum Sat�r� : //Tekli yorum sat�r� a��kland�.
	
/*	�oklu Yorum Sat�r�: 
	/*
	�oklu Yorum Sat�r� A��kland�	
	
	
*/

/* 
	De�i�kenler : char, int, float, double, short, long
	
	char : 1 byte(8 bit)  De�er aral��� --> 0-255  Format belirleyici : %c, %d ASCII
	int : 4 byte (32 bit) De�er aral��� --> -2^16  2^16  Format Belirleyici : %d 
	short : 2 byte (16 bit) De�er aral��� --> -2^8 2^8 Format Belirleyici : %hd
	long : 8 byte (64 bit) De�er aral��� --> 123451549845641564864321 Format Belirleyici : %ld
	float : 4 byte (32 bit) Ondal�kl� say�lar Format Belirleyici : %f
	double : 64 byte (64 bit) B�y�k Ondal�kl� say�lar Format Belirleyici : %lf
	
	%s : Karakter dizileri i�in kullan�l�r. 
	
	De�i�ken Tan�mlama 
	
	veritipi degiskenadi;
	
	
*/

int main(){
	int a = 5;
	float x = 3.0;
	char b = 'B';
	
	printf("%d %.1f %d", a, x, b);
	
	return 0;
}
	
