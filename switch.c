#include <stdio.h>

/*

switch(operation){

case  :  i�lemler;
			break;
			
case : 
		break;

default: *****break;
}

*/
int main(){
//Basit bir atm program� yaz�n�z.
	int islemNumarasi;
	int bakiye = 1000;
	int tutar;
	
	printf("Islemler:\n 1.Bakiye Sorgula\n2.Para Cekme\3.Para Yatirma");
	scanf("%d",&islemNumarasi);
	
	switch(islemNumarasi){
		case 1:printf("Bakiye = %d",bakiye);break;
		
		case 2:printf("�ekece�iniz tutari giriniz : ");
				scanf("%d",&tutar);
				if(tutar > bakiye){
					printf("Bakiye yetersiz");
				}
				else{
					bakiye = bakiye - tutar;
					printf("Kalan bakiye = %d",bakiye);
				}
				break;
		
		case 3: printf("Yatiraca�iniz tutari giriniz: ");
				scanf("%d",&tutar);
				
				bakiye = bakiye + tutar;
				printf("Yeni Bakiyeniz = %d",bakiye);
		
		default : printf("Gecersiz islem numarasi girdiniz. L�tfen daha sonra tekrar deneyiniz");break;
	}	

return 0;
}

