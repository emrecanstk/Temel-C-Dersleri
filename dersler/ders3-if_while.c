/*

C Dersleri - 3 (If ve While)

1- Ekrana yaz� yazd�ran program

2- Kullan�c� taraf�ndan girilen say�y� ekrana yazd�ran program

3- Kullan�c�n�n girdi�i yaz�y� ekrana yazd�ran program

4- Konu Anlat�m (if  else  else if)

5- Kullan�c�n�n girdi�i iki say�dan b�y�k olan�n� yazd�ran program

6- Konu Anlat�m (While D�ng�s�)

7- 1'den kullan�c�n�n girdi�i say�ya kadar ekrana yazd�ran program

8- Faktoriyel hesaplayan program

9- Kullan�c�n�n girdi�i t�m say�lar aras�ndan en b�y���n� her seferinde ekrana yazd�ran program


�DEV: Bug�ne kadar ��rendiklerimizi kullanarak herhangi bir �rnek program yaz.
Son Teslim: Per�embe 21:30

*/

#include<stdio.h>
main() {
	
	// 1- Ekrana yaz� yazd�ran program
	printf("Olabildigince hizli bir sekilde C ogreniyorum.\n");
	
	// 2- Kullan�c� taraf�ndan girilen say�y� ekrana yazd�ran program
	int a;
	printf("sayi giriniz: ");
	scanf("%d",&a);
	printf("%d\n",a);
	
	// 3- Kullan�c�n�n girdi�i yaz�y� ekrana yazd�ran program
	char yazi[20];
	printf("yaziniz: ");
	scanf("%s",yazi);
	printf("%s",yazi);
	
	// 4- Konu Anlat�m (if  else  else if)
	if(5>99) {
		printf("\nilk sayi digerinden buyuk");
	}
	else if(5==99) {
		printf("\niki sayi birbirine esit");
	}
	else {
		printf("\nilk sayi digerinden kucuk");
	}
	
	// 5- Kullan�c�n�n girdi�i iki say�dan b�y�k olan�n� yazd�ran program
	int sayi1,sayi2;
	printf("\n1. sayi: ");
	scanf("%d",&sayi1);
	printf("2. sayi: ");
	scanf("%d",&sayi2);
	if(sayi1>sayi2) {
		printf("\n%d sayisi %d sayisindan buyuktur",sayi1,sayi2);
	}
	else if(sayi1==sayi2) {
		printf("\n%d sayisi %d sayisina esittir",sayi1,sayi2);
	}
	else {
		printf("\n%d sayisi %d sayisindan buyuktur",sayi2,sayi1);
	}
	
	// 6- Konu Anlat�m (While D�ng�s�)
	int i=1;
	while(i<=5) {
		printf("\n%d. emre",i);
		i++;
	}
	
	// 7- 1'den kullan�c�n�n girdi�i say�ya kadar ekrana yazd�ran program
	int n,number=1;
	printf("\nkaca kadar: ");
	scanf("%d",&n);
	while(number<n) {
		printf("\n%d",number);
		number++;
	}

	// 8- Faktoriyel hesaplayan program
	int fakt,sonuc=1;
	printf("\nfaktoriyelini hesaplatmak istediginiz sayi: ");
	scanf("%d",&fakt);
	while(fakt>0) {
		sonuc *= fakt;
		fakt--;
	}
	printf("\nsonucumuz: %d",sonuc);
	
	// 9- Kullan�c�n�n girdi�i t�m pozitif say�lar aras�ndan en b�y���n� her seferinde ekrana yazd�ran program
	int girilen=0,enbuyuk=0;
	printf("\ncikmak icin negatif giriniz");
	while(girilen>=0) {
		printf("\nsayi: ");
		scanf("%d",&girilen);
		
		if(girilen>enbuyuk) {
			enbuyuk=girilen;
		}
		printf("\nen buyuk sayi: %d",enbuyuk);
	}
}
