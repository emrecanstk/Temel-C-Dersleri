/*

�rnekler - 3 (Zor)

A�a��daki �rnekleri:
-bir hafta s�rede ��zmelisiniz.
-�uana kadar ��rendi�iniz konular ile ��zmelisiniz.
-yanlar�nda yer alan �RNEK ��kt�lara dikkat ederek ��zmelisiniz.
-se�ti�iniz ��z�m y�nteminin VER�ML� oldu�undan emin olarak ��zmelisiniz.

Not: �RNEK ��kt�larda yer alan "\n" ibaresi, �ncesinde kullan�c�n�n veri girdi�ine i�arettir.
Not: �RNEK ��kt�lar ad� �zerinde �rnek olduklar� i�in, birebir ayn�s�n� bast�rmaya �al��may�n.

1- A�a��daki ��kt�y� d�ng� kullanarak ekrana yazd�r�n�z
   x x x x x
   x x x x 
   x x x
   x x
   x

2- A�a��daki ��kt�y� d�ng� kullanarak ekrana yazd�r�n�z
   1 2 3 4 5
   2 3 4 5
   3 4 5
   4 5
   5

3- Kullan�c�n�n girdi�i 15 say�y� girili� s�ras�n�n tersine g�re ekrana yazd�ran program

4- Kullan�c�n�n girdi�i 20 say�y� ekrana tek olanlar� ayr�, �ift olanlar� ayr� yazd�ran program | ... \n tekler:   ciftler:

TESL�M TAR�H�: 3 May�s 2021

*/

#include<stdio.h>
main() {
	
	// 1- A�a��daki ��kt�y� d�ng� kullanarak ekrana yazd�r�n�z
	int i,j;
	for(i=5;i>0;i--) {
		for(j=0;j<i;j++) {
			printf("x ");
		}
		printf("\n");
	}
	printf("\n\n");
	
	// 2- A�a��daki ��kt�y� d�ng� kullanarak ekrana yazd�r�n�z
	for(i=1;i<6;i++) {
		for(j=i;j<6;j++) {
			printf("%d ",j);
		}
		printf("\n");
	}
	printf("\n\n");
	
	// 3- Kullan�c�n�n girdi�i 15 say�y� girili� s�ras�n�n tersine g�re ekrana yazd�ran program
	int sayilar[15];
	for(i=0;i<15;i++) {
		printf("%d. sayi: ",i+1);
		scanf("%d",&sayilar[i]);
	}
	for(i=14;i>=0;i--) {
		printf("%d ",sayilar[i]);
	}
	printf("\n\n");
	
	// 4- Kullan�c�n�n girdi�i 20 say�y� ekrana tek olanlar� ayr�, �ift olanlar� ayr� yazd�ran program | ... \n tekler:   ciftler:
	int tekler[20],ciftler[20],sayi,t=0,c=0;
	for(i=0;i<20;i++) {
		printf("%d. sayi: ",i+1);
		scanf("%d",&sayi);
		if(sayi%2==1) {
			tekler[t] = sayi;
			t++;
		}
		else {
			ciftler[c] = sayi;
			c++;
		}
	}
	printf("tekler: ");
	for(i=0;i<t;i++) {
		printf("%d ",tekler[i]);
	}
	printf("\nciftler: ");
	for(i=0;i<c;i++) {
		printf("%d ",ciftler[i]);
	}
	
}
