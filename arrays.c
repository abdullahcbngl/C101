#include <stdio.h>

int main(){
	/*int sayilar[] = {1,2,3,4,5};
	
	int i = 0;
	for(;i<5;i++){
		printf("%d", sayilar[i]);
	}
	
	char isim[] = "Abdullah";
	
	printf("%c",isim[0]);*/
	
	char isim[30];
	printf("ISIM giriniz: ");
	scanf("%s",isim);
	
	
	printf("Isim : %s", isim);
	
	return 0;
}
