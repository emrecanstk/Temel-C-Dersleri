/*

�rnekler - 1 (Kolay)

A�a��daki �rnekleri:
-bir hafta s�rede ��zmelisiniz.
-�uana kadar ��rendi�iniz konular ile ��zmelisiniz.
-yanlar�nda yer alan �RNEK ��kt�lara dikkat ederek ��zmelisiniz.
-se�ti�iniz ��z�m y�nteminin VER�ML� oldu�undan emin olarak ��zmelisiniz.

Not: �RNEK ��kt�larda yer alan "\n" ibaresi, �ncesinde kullan�c�n�n veri girdi�ine i�arettir.
Not: �RNEK ��kt�lar ad� �zerinde �rnek olduklar� i�in, birebir ayn�s�n� bast�rmaya �al��may�n.

1- Kendi isminizi ve ya��n�z� ekrana yazd�r�n�z | Adim Emre Can ve yasim 19

2- Kullan�c�n�n girdi�i isim ve ya�� ekrana yazd�r�n�z | isim:Fatma yas:32 \n Adim Fatma ve yasim 32

3- Kullan�c�n�n girdi�i do�um y�l� bilgisine g�re o ki�inin ya��n� ekrana yazd�r�n�z | yil:2010 \n yas:11

4- Kullan�c�n�n girdi�i say�ya g�re ekrana tek ise "tek", �ift ise "�ift" yazd�r�n�z | sayi:3 \n tek

5- Kullan�c�n�n girdi�i say� 10'dan k���kse karesini, 50'den b�y�kse 3 kat�n� ekrana yazd�r�n�z | sayi:4 \n 16

6- Kullan�c�n�n girdi�i 3 say�dan en b�y���n� ekrana yazd�r�n�z | a:5 b:3 c:8 \n en buyuk:8

TESL�M TAR�H�: 3 May�s 2021

*/

#include<stdio.h>
main() {
	
	// 1- Kendi isminizi ve ya��n�z� ekrana yazd�r�n�z | Adim Emre Can ve yasim 19
	printf("Adim Emre Can ve yasim 19\n\n");
	
	// 2- Kullan�c�n�n girdi�i isim ve ya�� ekrana yazd�r�n�z | isim:Fatma yas:32 \n Adim Fatma ve yasim 32
	int yas;
	char isim[20];
	printf("isim: ");
	scanf("%s",isim);
	printf("yas: ");
	scanf("%d",&yas);
	printf("Adim %s ve yasim %d\n\n",isim,yas);
	
	// 3- Kullan�c�n�n girdi�i do�um y�l� bilgisine g�re o ki�inin ya��n� ekrana yazd�r�n�z | yil:2010 \n yas:11
	int yil;
	printf("yil: ");
	scanf("%d",&yil);
	printf("yas: %d\n\n",2021-yil);
	
	// 4- Kullan�c�n�n girdi�i say�ya g�re ekrana tek ise "tek", �ift ise "�ift" yazd�r�n�z | sayi:3 \n tek
	int sayi;
	printf("sayi: ");
	scanf("%d",&sayi);
	if(sayi%2==1) {
		printf("tek\n\n");
	}
	else {
		printf("cift\n\n");
	}
	
	// 5- Kullan�c�n�n girdi�i say� 10'dan k���kse karesini, 50'den b�y�kse 3 kat�n� ekrana yazd�r�n�z | sayi:4 \n 16
	printf("sayi: ");
	scanf("%d",&sayi);
	if(sayi<10) {
		printf("%d\n\n",sayi*sayi);
	}
	else if(sayi>50) {
		printf("%d\n\n",sayi*3);
	}
	
	// 6- Kullan�c�n�n girdi�i 3 say�dan en b�y���n� ekrana yazd�r�n�z | a:5 b:3 c:8 \n en buyuk:8
	int a,b,c;
	printf("a: ");
	scanf("%d",&a);
	printf("b: ");
	scanf("%d",&b);
	printf("c: ");
	scanf("%d",&c);
	if(a>b && a>c) {
		printf("en buyuk: %d\n\n",a);
	}
	else if(b>a && b>c) {
		printf("en buyuk: %d\n\n",b);
	}
	else if(c>a && c>b) {
		printf("en buyuk: %d\n\n",c);
	}
	
}
