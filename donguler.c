#include <stdio.h>
#include <stdlib.h>

/*
	do{
	
	i�lemler
	
	
	
	}while(ko�ul);




	while(ko�ul){
		i�lemler
		
		i++
	}


	for(int i = 0; i<50; i++){
		i�lemler
	
	}

*/


int main(){
	/*int toplam = 0;
	int sayac = 0;
	
	do{
		
		sayac++;
		toplam += sayac;		
	}while(sayac < 0);
	
	printf("Toplam = %d", toplam);*/
	
	/*int i = 10;
	while(i>0){
		printf("%d\n",i);
		}*/
		
		
	int faktoriyel = 1;
	
	int sayi = 5 ;
	int i;
	
	for(i=1; i<=sayi; i++){
		faktoriyel *= i;
	
	}
	printf("Faktoriyel = %d",faktoriyel);	
}
	

