/*

Örnekler - 1 (Kolay)

Aþaðýdaki örnekleri:
-bir hafta sürede çözmelisiniz.
-þuana kadar öðrendiðiniz konular ile çözmelisiniz.
-yanlarýnda yer alan ÖRNEK çýktýlara dikkat ederek çözmelisiniz.
-seçtiðiniz çözüm yönteminin VERÝMLÝ olduðundan emin olarak çözmelisiniz.

Not: ÖRNEK çýktýlarda yer alan "\n" ibaresi, öncesinde kullanýcýnýn veri girdiðine iþarettir.
Not: ÖRNEK çýktýlar adý üzerinde örnek olduklarý için, birebir aynýsýný bastýrmaya çalýþmayýn.

1- Kendi isminizi ve yaþýnýzý ekrana yazdýrýnýz | Adim Emre Can ve yasim 19

2- Kullanýcýnýn girdiði isim ve yaþý ekrana yazdýrýnýz | isim:Fatma yas:32 \n Adim Fatma ve yasim 32

3- Kullanýcýnýn girdiði doðum yýlý bilgisine göre o kiþinin yaþýný ekrana yazdýrýnýz | yil:2010 \n yas:11

4- Kullanýcýnýn girdiði sayýya göre ekrana tek ise "tek", çift ise "çift" yazdýrýnýz | sayi:3 \n tek

5- Kullanýcýnýn girdiði sayý 10'dan küçükse karesini, 50'den büyükse 3 katýný ekrana yazdýrýnýz | sayi:4 \n 16

6- Kullanýcýnýn girdiði 3 sayýdan en büyüðünü ekrana yazdýrýnýz | a:5 b:3 c:8 \n en buyuk:8

TESLÝM TARÝHÝ: 3 Mayýs 2021

*/

#include<stdio.h>
main() {
	
	// 1- Kendi isminizi ve yaþýnýzý ekrana yazdýrýnýz | Adim Emre Can ve yasim 19
	printf("Adim Emre Can ve yasim 19\n\n");
	
	// 2- Kullanýcýnýn girdiði isim ve yaþý ekrana yazdýrýnýz | isim:Fatma yas:32 \n Adim Fatma ve yasim 32
	int yas;
	char isim[20];
	printf("isim: ");
	scanf("%s",isim);
	printf("yas: ");
	scanf("%d",&yas);
	printf("Adim %s ve yasim %d\n\n",isim,yas);
	
	// 3- Kullanýcýnýn girdiði doðum yýlý bilgisine göre o kiþinin yaþýný ekrana yazdýrýnýz | yil:2010 \n yas:11
	int yil;
	printf("yil: ");
	scanf("%d",&yil);
	printf("yas: %d\n\n",2021-yil);
	
	// 4- Kullanýcýnýn girdiði sayýya göre ekrana tek ise "tek", çift ise "çift" yazdýrýnýz | sayi:3 \n tek
	int sayi;
	printf("sayi: ");
	scanf("%d",&sayi);
	if(sayi%2==1) {
		printf("tek\n\n");
	}
	else {
		printf("cift\n\n");
	}
	
	// 5- Kullanýcýnýn girdiði sayý 10'dan küçükse karesini, 50'den büyükse 3 katýný ekrana yazdýrýnýz | sayi:4 \n 16
	printf("sayi: ");
	scanf("%d",&sayi);
	if(sayi<10) {
		printf("%d\n\n",sayi*sayi);
	}
	else if(sayi>50) {
		printf("%d\n\n",sayi*3);
	}
	
	// 6- Kullanýcýnýn girdiði 3 sayýdan en büyüðünü ekrana yazdýrýnýz | a:5 b:3 c:8 \n en buyuk:8
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
