/*

C Dersleri - 4 (While ve For)

1- 1'den 50'ye kadar olan çift sayýlarýn toplamýný ekrana yazdýran program
  
2- 1'den 50'ye kadar olan tek sayýlarýn toplamýný, çift sayýlarýn karelerinin toplamýný ekrana yazdýran program

3- While ile 5X5'lik çarpým tablosu programý

4- Konu Anlatým (For Döngüsü)

5- For ile 5X5'lik çarpým tablosu programý

6- For döngüsü kullanarak aþaðýdaki çýktýyý ekrana yazdýran program
	1
	1 2
	1 2 3
	1 2 3 4
	1 2 3 4 5
	1 2 3 4
	1 2 3
	1 2
	1
*/

#include<stdio.h>
main() {
	
	// 1- 1'den 50'ye kadar olan çift sayýlarýn toplamýný ekrana yazdýran program
	int sayi=1,toplam=0;
	while(sayi<50) {
		if(sayi%2==0) {
			toplam += sayi;
		}
		sayi++;
	}
	printf("%d\n",toplam);
	
	// 2- 1'den 50'ye kadar olan tek sayýlarýn toplamýný, çift sayýlarýn karelerinin toplamýný ekrana yazdýran program
	int sayi2=1,toplam_tek=0,toplam_cift=0;
	while(sayi2<50) {
		if(sayi2%2==1) {
			toplam_tek += sayi2;
		}
		else {
			toplam_cift += sayi2*sayi2;
		}
		sayi2++;
	}
	printf("tek sayilarin toplami: %d\n",toplam_tek);
	printf("ciftlerin karelerinin toplami: %d\n",toplam_cift);
	
	// 3- While ile 5X5'lik çarpým tablosu programý
	int a=1,b=1,carpim;
	while(a<=5) {
		while(b<=5) {
			carpim = a*b;
			printf("%d x %d = %d\n",a,b,carpim);
			b++;
		}
		a++;
		b=1;
		printf("\n");
	}
	// 4- Konu Anlatým (For Döngüsü)
	int x=0;
	while(x<=5) {
		printf("%d\n",x);
		x++;
	}
	for(x=0;x<=5;x++) {
		printf("%d\n",x);
	}
	
	// 5- For ile 5X5'lik çarpým tablosu programý
	for(a=1;a<=5;a++) {
		for(b=1;b<=5;b++) {
			carpim = a*b;
			printf("%d x %d = %d\n",a,b,carpim);
		}
		printf("\n");
	}
	
	// 6- For döngüsü kullanarak aþaðýdaki çýktýyý ekrana yazdýran program
	// 1
	// 1 2
	// 1 2 3
	// 1 2 3 4
	// 1 2 3 4 5
	// 1 2 3 4
	// 1 2 3
	// 1 2
	// 1
	
	for(a=1;a<=5;a++) {
		for(b=1;b<=a;b++) {
			printf("%d ",b);
		}
		printf("\n");
	}
	for(a=4;a>=1;a--) {
		for(b=1;b<=a;b++) {
			printf("%d ",b);
		}
		printf("\n");
	}
		
}
