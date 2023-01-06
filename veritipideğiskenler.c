#include <stdio.h>

// Yorum Satýrlarý 
//	Tekli Yorum Satýrý : //Tekli yorum satýrý açýklandý.
	
/*	Çoklu Yorum Satýrý: 
	/*
	Çoklu Yorum Satýrý Açýklandý	
	
	
*/

/* 
	Deðiþkenler : char, int, float, double, short, long
	
	char : 1 byte(8 bit)  Deðer aralýðý --> 0-255  Format belirleyici : %c, %d ASCII
	int : 4 byte (32 bit) Deðer aralýðý --> -2^16  2^16  Format Belirleyici : %d 
	short : 2 byte (16 bit) Deðer aralýðý --> -2^8 2^8 Format Belirleyici : %hd
	long : 8 byte (64 bit) Deðer aralýðý --> 123451549845641564864321 Format Belirleyici : %ld
	float : 4 byte (32 bit) Ondalýklý sayýlar Format Belirleyici : %f
	double : 64 byte (64 bit) Büyük Ondalýklý sayýlar Format Belirleyici : %lf
	
	%s : Karakter dizileri için kullanýlýr. 
	
	Deðiþken Tanýmlama 
	
	veritipi degiskenadi;
	
	
*/

int main(){
	int a = 5;
	float x = 3.0;
	char b = 'B';
	
	printf("%d %.1f %d", a, x, b);
	
	return 0;
}
	
