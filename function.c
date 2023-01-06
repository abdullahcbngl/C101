#include <stdio.h>
/*
Parametre olarak aldýðýmýz yas deðiþkenini fonksiyon içerisinde kullaniciYasi adlý deðiþkene atýyoruz.
Fonksiyon içerisinde kullaniciYasi olarak gördüðümüz deðiþken aslýnda main içerisinden gelen yas deðiþkeni. 
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
