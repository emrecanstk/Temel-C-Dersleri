/*

C Dersleri - 7 (ATM Programý)

1- Switch Case ile ATM programý
   -þifre ile hesaba giriþ
   -bakiye kontrol
   -genel döngü
   
*/

#include<stdio.h>
main() {
    	
	// 1- Switch Case ile ATM programý
	int bakiye=650,tutar,giris,secim,sifre=2605;
	
	printf("\n\n1. Giris Yap\n2. Kapat\nsecim: ");
	scanf("%d",&giris);
	
	while(giris==1) {
		secim=0;
		printf("Sifre: ");
		scanf("%d",&sifre);
		if(sifre==2605) {
			while(secim!=4) {
				printf("\n\n1. Para Yatir\n2. Para Cek\n3. Hesap Bilgileri\n4. Cikis Yap\nsecim: ");
				scanf("%d",&secim);
				switch(secim) {
					case 1:
						printf("Bakiye: %d\n",bakiye);
						printf("Yatirilacak Tutar: ");
						scanf("%d",&tutar);
						bakiye = bakiye+tutar;
						printf("Bakiye: %d\n",bakiye);
						break;
					case 2:
						printf("Bakiye: %d\n",bakiye);
						printf("Cekilecek Tutar: ");
						scanf("%d",&tutar);
						if(tutar>bakiye) {
							printf("Yetersiz Bakiye\n");
						}
						else {
							bakiye = bakiye-tutar;
							printf("Bakiye: %d\n",bakiye);
						}
						break;
					case 3:
						printf("Ad Soyad: Miray Sen\nTCKN: 13585849910\nBakiye: %d\n\n",bakiye);
						break;
					case 4:
						printf("Hesaptan cikis yapildi.\n\n");
						break;	
				}	
			}	
		}
		else {
			printf("Hatali sifre girdiniz.\n\n");
		}
		printf("1. Giris Yap\n2. Kapat");
		scanf("%d",&giris);
	}
}
