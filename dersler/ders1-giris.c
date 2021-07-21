/*

C Dersleri - 1 (Giri�)

1- C programlar�n�n genel yap�s� ve main() fonksiyonu

2- Derleyici �al��ma mant��� ve .exe dosyalar�

3- Veri Tiplerine genel bak�� ve a��klama
   int   => tam say� de�erlerini tan�mlar
   float => ondal�kl� say� de�erlerini tan�mlar
   char  => karakter dizisi tan�mlar

4- Printf,scanf fonksiyonlar� ve #include<stdio.h>
   a) Hello World ��kt�s� almak.
   b) Kullan�c�n�n ya��n� ona s�ylemek.

Di�er K�t�phaneler: https://www.bilgigunlugum.net/prog/cprog/c_stdkut

*/

#include<stdio.h>
main() {
	
	// Veri Tiplerine genel bak�� ve a��klama
	int a;
	float b;
	char meyve[10]="armut";
	a = 3;
	b = 1.2;
	
	// Hello World ��kt�s� almak.
	printf("Hello World\n"); // alt sat�ra ge�mek i�in: "\n"
	
	// Kullan�c�n�n ya��n� ona s�ylemek.
	int yas;
	char isim[20];
	int sinif=3;
	printf("isiminizi girin:");
	scanf("%s",isim);
	printf("yasinizi girin: ");
	scanf("%d",&yas);
	printf("%s kullanicisi %d yasindadir ve %d. siniftadir",isim,yas,sinif);
	
	getch();
}
