/*

C Dersleri - 1 (Giriþ)

1- C programlarýnýn genel yapýsý ve main() fonksiyonu

2- Derleyici çalýþma mantýðý ve .exe dosyalarý

3- Veri Tiplerine genel bakýþ ve açýklama
   int   => tam sayý deðerlerini tanýmlar
   float => ondalýklý sayý deðerlerini tanýmlar
   char  => karakter dizisi tanýmlar

4- Printf,scanf fonksiyonlarý ve #include<stdio.h>
   a) Hello World çýktýsý almak.
   b) Kullanýcýnýn yaþýný ona söylemek.

Diðer Kütüphaneler: https://www.bilgigunlugum.net/prog/cprog/c_stdkut

*/

#include<stdio.h>
main() {
	
	// Veri Tiplerine genel bakýþ ve açýklama
	int a;
	float b;
	char meyve[10]="armut";
	a = 3;
	b = 1.2;
	
	// Hello World çýktýsý almak.
	printf("Hello World\n"); // alt satýra geçmek için: "\n"
	
	// Kullanýcýnýn yaþýný ona söylemek.
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
