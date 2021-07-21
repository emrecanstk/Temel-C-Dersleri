/*

�rnekler - 2 (Orta)

A�a��daki �rnekleri:
-bir hafta s�rede ��zmelisiniz.
-�uana kadar ��rendi�iniz konular ile ��zmelisiniz.
-yanlar�nda yer alan �RNEK ��kt�lara dikkat ederek ��zmelisiniz.
-se�ti�iniz ��z�m y�nteminin VER�ML� oldu�undan emin olarak ��zmelisiniz.

Not: �RNEK ��kt�larda yer alan "\n" ibaresi, �ncesinde kullan�c�n�n veri girdi�ine i�arettir.
Not: �RNEK ��kt�lar ad� �zerinde �rnek olduklar� i�in, birebir ayn�s�n� bast�rmaya �al��may�n.

1- 1'den kullan�c�n�n girdi�i say�ya kadar olan say�lar� ekrana yazd�r�n�z | sayi:8 \n 1,2,3,4,5,6,7

2- Kullan�c�n�n girdi�i 10 say�n�n toplam�n� ekrana yazd�r�n�z | ... \n toplam:16

3- Kullan�c�n�n girdi�i 10 say�dan teklerin toplam�n�, �iftlerin ortalamas�n� yazd�r�n�z | ... \n tek-toplam:52 cift-ortalama:6

4- Kullan�c�n�n girdi�i 5 say�dan en b�y���n� ve en k�����n� ekrana yazd�r�n�z | ... \n enbuyuk:14 enkucuk:3

5- Kenar �zellikleri kullan�c� taraf�ndan girilen ��genin �izilip �izilemeyece�ini ekrana yazd�r�n�z | a:1 b:12 c:4 \n cizilemez

TESL�M TAR�H�: 3 May�s 2021

*/

#include<stdio.h>
main() {
	
	// 1- 1'den kullan�c�n�n girdi�i say�ya kadar olan say�lar� ekrana yazd�r�n�z | sayi:8 \n 1,2,3,4,5,6,7
	int n,i=1;
	printf("sayi: ");
	scanf("%d",&n);
	while(i<n) {
		printf("%d,",i);
		i++;
	}
	printf("\n\n");
	
	// 2- Kullan�c�n�n girdi�i 10 say�n�n toplam�n� ekrana yazd�r�n�z | ... \n toplam:16
	int sayi,toplam=0;
	for(i=0;i<10;i++) {
		printf("%d. sayi: ",i+1);
		scanf("%d",&sayi);
		toplam += sayi;
	}
	printf("toplam: %d\n\n",toplam);
	
	// 3- Kullan�c�n�n girdi�i 10 say�dan teklerin toplam�n�, �iftlerin ortalamas�n� yazd�r�n�z | ... \n tek-toplam:52 cift-ortalama:6
	int tektoplam=0,x=0;
	float cifttoplam=0.0;
	for(i=0;i<10;i++) {
		printf("%d. sayi: ",i+1);
		scanf("%d",&sayi);
		if(sayi%2==1) {
			tektoplam += sayi;
		}
		else {
			cifttoplam += sayi;
			x++;
		}
	}
	printf("tek-toplam: %d\n",tektoplam);
	printf("cif-ortalama: %.2f\n\n",cifttoplam/x);
	
	// 4- Kullan�c�n�n girdi�i 5 say�dan en b�y���n� ve en k�����n� ekrana yazd�r�n�z | ... \n enbuyuk:14 enkucuk:3
	int max=-99999,min=99999;
	for(i=0;i<5;i++) {
		printf("%d. sayi: ",i+1);
		scanf("%d",&sayi);
		if(sayi>max) {
			max=sayi;
		}
		if(sayi<min) {
			min=sayi;
		}
	}
	printf("enbuyuk: %d\n",max);
	printf("enkucuk: %d\n\n",min);
	
	// 5- Kenar �zellikleri kullan�c� taraf�ndan girilen ��genin �izilip �izilemeyece�ini ekrana yazd�r�n�z | a:1 b:12 c:4 \n cizilemez
	int a,b,c;
	printf("a: ");
	scanf("%d",&a);
	printf("b: ");
	scanf("%d",&b);
	printf("c: ");
	scanf("%d",&c);
	if(a<b+c && a>b-c && a>c-b) {
		printf("cizilebilir\n\n");
	}
	else {
		printf("cizilemez\n\n");
	}
	
}
