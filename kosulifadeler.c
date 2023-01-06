#include <stdio.h>

/* 
bool veritipi --> true(doðru) ya da false(yanlýþ)*/

/* 
	Mantýksal Operatörler
	
	> --> Büyük müdür a>b
	< --> Küçük müdür  a<b
	<= --> Küçük eþit midir a<=b
	>= --> Büyük eþit midir a>=b
	== --> Eþit midir a==b
	!= --> eþit deðil midir a!=b 

&& : ve anlamý katar. true && true && false : True olmasý için hepsinin true olmasý gerekmektedir.
|| : ya da anlamý katar. true||false  : True olmasý için en az bir ifadenin true olmasý gerekmektedir. 

Þartlý ifadeler : 

a = x > y ? x:y

if (koþul){
	
	****
}

else if(koþul){}

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
	
	// Kullanýcýdan alýnan not deðerlerine göre dersi geçip geçmediðini kontrol eden programý yazýnýz.
	int vize1, vize2, final;
	float okulort;
	float dersort;
	printf("1.vize : ");
	scanf("%d",&vize1);
	printf("2.vize : ");
	scanf("%d",&vize2);
	printf("Final : ");
	scanf("%d",&final);
	
	printf("Okul ortalamasýný giriniz : ");
	scanf("%f", &okulort);
	
	dersort = (vize1 * 0.3 + (vize2*0.3) + final*0.4);
	
	if(dersort >= 90){
		printf("Harf notunuz  AA ve Ders Ortalamanýz : %f", dersort);
	}
	else if(dersort >= 85 && dersort <90){
		printf("Harf notunuz  AA ve Ders Ortalamanýz : %f", dersort);
	}
	else if(dersort >= 80 && dersort<85){
		printf("Harf notunuz  BA ve Ders Ortalamanýz : %f", dersort);
	}
	else if(dersort >= 75 && dersort <80){
		printf("Harf notunuz  BB ve Ders Ortalamanýz : %f", dersort);
	}
	else if(dersort >= 70 && dersort < 75){
		printf("Harf notunuz  CB ve Ders Ortalamanýz : %f", dersort);
	}
	else if(dersort >= 65 && dersort < 70){
		printf("Harf notunuz  CC ve Ders Ortalamanýz : %f", dersort);
	}
	else if(dersort >= 60 && dersort < 65){
	
		printf("Harf notunuz  DC ve Ders Ortalamanýz : %f", dersort);
		
		if(okulort >= 2.00){
			printf("Dersi þartlý olarak geçebilirsin fakat tekrardan alman daha iyi olabilir.");
		}
	}
	else if(dersort >= 55 && dersort < 60){
		printf("Harf notunuz  DD ve Ders Ortalamanýz : %f", dersort);
			if(okulort >= 2.00){
			printf("Dersi þartlý olarak geçebilirsin fakat tekrardan alman daha iyi olabilir.");
		}
	}
	else{
		printf("Harf notunuz  FF ve Ders Ortalamanýz : %f", dersort);
		printf("Dersten kaldýnýz.");
	}
	
	return 0;
}
