/*

C Dersleri - 3 (If ve While)

1- Ekrana yazý yazdýran program

2- Kullanýcý tarafýndan girilen sayýyý ekrana yazdýran program

3- Kullanýcýnýn girdiði yazýyý ekrana yazdýran program

4- Konu Anlatým (if  else  else if)

5- Kullanýcýnýn girdiði iki sayýdan büyük olanýný yazdýran program

6- Konu Anlatým (While Döngüsü)

7- 1'den kullanýcýnýn girdiði sayýya kadar ekrana yazdýran program

8- Faktoriyel hesaplayan program

9- Kullanýcýnýn girdiði tüm sayýlar arasýndan en büyüðünü her seferinde ekrana yazdýran program


ÖDEV: Bugüne kadar öðrendiklerimizi kullanarak herhangi bir örnek program yaz.
Son Teslim: Perþembe 21:30

*/

#include<stdio.h>
main() {
	
	// 1- Ekrana yazý yazdýran program
	printf("Olabildigince hizli bir sekilde C ogreniyorum.\n");
	
	// 2- Kullanýcý tarafýndan girilen sayýyý ekrana yazdýran program
	int a;
	printf("sayi giriniz: ");
	scanf("%d",&a);
	printf("%d\n",a);
	
	// 3- Kullanýcýnýn girdiði yazýyý ekrana yazdýran program
	char yazi[20];
	printf("yaziniz: ");
	scanf("%s",yazi);
	printf("%s",yazi);
	
	// 4- Konu Anlatým (if  else  else if)
	if(5>99) {
		printf("\nilk sayi digerinden buyuk");
	}
	else if(5==99) {
		printf("\niki sayi birbirine esit");
	}
	else {
		printf("\nilk sayi digerinden kucuk");
	}
	
	// 5- Kullanýcýnýn girdiði iki sayýdan büyük olanýný yazdýran program
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
	
	// 6- Konu Anlatým (While Döngüsü)
	int i=1;
	while(i<=5) {
		printf("\n%d. emre",i);
		i++;
	}
	
	// 7- 1'den kullanýcýnýn girdiði sayýya kadar ekrana yazdýran program
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
	
	// 9- Kullanýcýnýn girdiði tüm pozitif sayýlar arasýndan en büyüðünü her seferinde ekrana yazdýran program
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
