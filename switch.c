#include <stdio.h>

/*

switch(operation){

case  :  işlemler;
			break;
			
case : 
		break;

default: *****break;
}

*/
int main(){
//Basit bir atm programı yazınız.
	int islemNumarasi;
	int bakiye = 1000;
	int tutar;
	
	printf("Islemler:\n 1.Bakiye Sorgula\n2.Para Cekme\3.Para Yatirma");
	scanf("%d",&islemNumarasi);
	
	switch(islemNumarasi){
		case 1:printf("Bakiye = %d",bakiye);break;
		
		case 2:printf("Çekeceğiniz tutari giriniz : ");
				scanf("%d",&tutar);
				if(tutar > bakiye){
					printf("Bakiye yetersiz");
				}
				else{
					bakiye = bakiye - tutar;
					printf("Kalan bakiye = %d",bakiye);
				}
				break;
		
		case 3: printf("Yatiracağiniz tutari giriniz: ");
				scanf("%d",&tutar);
				
				bakiye = bakiye + tutar;
				printf("Yeni Bakiyeniz = %d",bakiye);
		
		default : printf("Gecersiz islem numarasi girdiniz. Lütfen daha sonra tekrar deneyiniz");break;
	}	

return 0;
}

