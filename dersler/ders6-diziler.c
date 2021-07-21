/*

C Dersleri - 6 (Diziler)

1- Dizilerin tanýmýnýn yapýlmasý
   -index kavramý
   -sayý ve karakter dizileri
   -diziye eleman ekleme

2- Kullanýcýnýn girdiði 5 sayýyý ekrana yazdýran program
   -dizi ve döngü kullanmadan
   -dizi kullanarak
   -dizi ve dögü kullanarak

3- Bir sayý dizisindeki en küçük sayýyý bulan program

4- Fibonacci sayý dizisini ekrana yazdýran program

*/

#include<stdio.h>
main() {
	
	// 1- Dizilerin tanýmýnýn yapýlmasý
	int rakamlar[]={1,2,3,4,5,6,7,8,9,0};
	printf("%d\n",rakamlar[5]);
	char isim[10]="Emre Can";
	printf("%s\n",isim);
	printf("%d\n",rakamlar[0]);
	rakamlar[0] = 216;
	printf("%d\n",rakamlar[0]);
	rakamlar[10] = -3;
	printf("%d\n",rakamlar[10]);
	
	// 2- Kullanýcýnýn girdiði 5 sayýyý ekrana yazdýran program [Dizi ve Döngü Kullanmadan]
	int sayi1,sayi2,sayi3,sayi4,sayi5;
	printf("sayi1: ");
	scanf("%d",&sayi1);
	printf("sayi2: ");
	scanf("%d",&sayi2);
	printf("sayi3: ");
	scanf("%d",&sayi3);
	printf("sayi4: ");
	scanf("%d",&sayi4);
	printf("sayi5: ");
	scanf("%d",&sayi5);
	printf("%d %d %d %d %d\n\n",sayi1,sayi2,sayi3,sayi4,sayi5);
	
	// 2- Kullanýcýnýn girdiði 5 sayýyý ekrana yazdýran program [Dizi Kullanarak]
	int sayilar[5];
	printf("sayi1: ");
	scanf("%d",&sayilar[0]);
	printf("sayi2: ");
	scanf("%d",&sayilar[1]);
	printf("sayi3: ");
	scanf("%d",&sayilar[2]);
	printf("sayi4: ");
	scanf("%d",&sayilar[3]);
	printf("sayi5: ");
	scanf("%d",&sayilar[4]);
	printf("%d %d %d %d %d\n\n",sayilar[0],sayilar[1],sayilar[2],sayilar[3],sayilar[4]);
	
	// 2- Kullanýcýnýn girdiði 5 sayýyý ekrana yazdýran program [Dizi ve Döngü Kullanarak]
	int numbers[5],a;
	for(a=0;a<5;a++) {
		printf("sayi%d: ",a+1);
		scanf("%d",&numbers[a]);
	}
	for(a=0;a<5;a++) {
		printf("%d ",numbers[a]);
	}
	
	// 3- Bir sayý dizisindeki en küçük sayýyý bulan program
	int gulnurcuklar[8] = {7,3,4,5,9,1,24,10};
	int enk=gulnurcuklar[0];
	for(a=1;a<8;a++) {
		if(gulnurcuklar[a]<enk) {
			enk = gulnurcuklar[a];
		}
	}
	printf("\nen kucuk: %d",enk);
	
	// 4- Fibonacci sayý dizisini ekrana yazdýran program
	int fibonlar[30],toplam; // 1 1 2 3 5 8 13 21
	a=0;
	fibonlar[0] = 1;
	fibonlar[1] = 1;
	while(a<30) {
		toplam=fibonlar[a]+fibonlar[a+1];
		fibonlar[a+2]=toplam;
		printf("%d ",fibonlar[a]);
		a++;
	}
}


