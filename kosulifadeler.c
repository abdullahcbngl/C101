#include <stdio.h>

/* 
bool veritipi --> true(do�ru) ya da false(yanl��)*/

/* 
	Mant�ksal Operat�rler
	
	> --> B�y�k m�d�r a>b
	< --> K���k m�d�r  a<b
	<= --> K���k e�it midir a<=b
	>= --> B�y�k e�it midir a>=b
	== --> E�it midir a==b
	!= --> e�it de�il midir a!=b 

&& : ve anlam� katar. true && true && false : True olmas� i�in hepsinin true olmas� gerekmektedir.
|| : ya da anlam� katar. true||false  : True olmas� i�in en az bir ifadenin true olmas� gerekmektedir. 

�artl� ifadeler : 

a = x > y ? x:y

if (ko�ul){
	
	****
}

else if(ko�ul){}

else{
	
}



*/


int main(){
/*	int a;
	int b;
	printf("A sayisini giriniz: ");
	scanf("%d",&a);
	
	printf("B sayisini giriniz : ");
	scanf("%d",&b);
	
	if(a>b){
		printf("A sayisi B sayisindan buyuktur.");
	}
	
	else{
		printf("B sayisi A sayisindan buyuktur.");
	}*/
	
	// Kullan�c�dan al�nan not de�erlerine g�re dersi ge�ip ge�medi�ini kontrol eden program� yaz�n�z.
	int vize1, vize2, final;
	float okulort;
	float dersort;
	printf("1.vize : ");
	scanf("%d",&vize1);
	printf("2.vize : ");
	scanf("%d",&vize2);
	printf("Final : ");
	scanf("%d",&final);
	
	printf("Okul ortalamas�n� giriniz : ");
	scanf("%f", &okulort);
	
	dersort = (vize1 * 0.3 + (vize2*0.3) + final*0.4);
	
	if(dersort >= 90){
		printf("Harf notunuz  AA ve Ders Ortalaman�z : %f", dersort);
	}
	else if(dersort >= 85 && dersort <90){
		printf("Harf notunuz  AA ve Ders Ortalaman�z : %f", dersort);
	}
	else if(dersort >= 80 && dersort<85){
		printf("Harf notunuz  BA ve Ders Ortalaman�z : %f", dersort);
	}
	else if(dersort >= 75 && dersort <80){
		printf("Harf notunuz  BB ve Ders Ortalaman�z : %f", dersort);
	}
	else if(dersort >= 70 && dersort < 75){
		printf("Harf notunuz  CB ve Ders Ortalaman�z : %f", dersort);
	}
	else if(dersort >= 65 && dersort < 70){
		printf("Harf notunuz  CC ve Ders Ortalaman�z : %f", dersort);
	}
	else if(dersort >= 60 && dersort < 65){
	
		printf("Harf notunuz  DC ve Ders Ortalaman�z : %f", dersort);
		
		if(okulort >= 2.00){
			printf("Dersi �artl� olarak ge�ebilirsin fakat tekrardan alman daha iyi olabilir.");
		}
	}
	else if(dersort >= 55 && dersort < 60){
		printf("Harf notunuz  DD ve Ders Ortalaman�z : %f", dersort);
			if(okulort >= 2.00){
			printf("Dersi �artl� olarak ge�ebilirsin fakat tekrardan alman daha iyi olabilir.");
		}
	}
	else{
		printf("Harf notunuz  FF ve Ders Ortalaman�z : %f", dersort);
		printf("Dersten kald�n�z.");
	}
	
	return 0;
}
