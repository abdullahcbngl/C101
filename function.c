#include <stdio.h>
/*
Parametre olarak ald���m�z yas de�i�kenini fonksiyon i�erisinde kullaniciYasi adl� de�i�kene at�yoruz.
Fonksiyon i�erisinde kullaniciYasi olarak g�rd���m�z de�i�ken asl�nda main i�erisinden gelen yas de�i�keni. 
*/
void donem(int kullaniciYasi){
     if(kullaniciYasi >= 0 && kullaniciYasi < 15){
          printf("Cocuksunuz.");
     }
     else if(kullaniciYasi >= 15 && kullaniciYasi < 30){
          printf("Gencsiniz.");
     }
     else if(kullaniciYasi >= 30 && kullaniciYasi < 55){
          printf("Yetiskinsiniz.");
     }
     else if(kullaniciYasi >= 55 && kullaniciYasi < 120){
          printf("Yaslisiniz.");
     }
     else{
          printf("Yanlis giris yaptiniz.");
     }
}


/* void toplam(int a, int b){
	int toplam = a + b;
	
}*/
int main(){
	  int yas;

     printf("Kac yasindasin ? ");
     scanf("%d",&yas);
     donem(yas);
	
}
