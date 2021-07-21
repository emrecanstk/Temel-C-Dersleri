/*

Örnekler - 2 (Orta)

Aþaðýdaki örnekleri:
-bir hafta sürede çözmelisiniz.
-þuana kadar öðrendiðiniz konular ile çözmelisiniz.
-yanlarýnda yer alan ÖRNEK çýktýlara dikkat ederek çözmelisiniz.
-seçtiðiniz çözüm yönteminin VERÝMLÝ olduðundan emin olarak çözmelisiniz.

Not: ÖRNEK çýktýlarda yer alan "\n" ibaresi, öncesinde kullanýcýnýn veri girdiðine iþarettir.
Not: ÖRNEK çýktýlar adý üzerinde örnek olduklarý için, birebir aynýsýný bastýrmaya çalýþmayýn.

1- 1'den kullanýcýnýn girdiði sayýya kadar olan sayýlarý ekrana yazdýrýnýz | sayi:8 \n 1,2,3,4,5,6,7

2- Kullanýcýnýn girdiði 10 sayýnýn toplamýný ekrana yazdýrýnýz | ... \n toplam:16

3- Kullanýcýnýn girdiði 10 sayýdan teklerin toplamýný, çiftlerin ortalamasýný yazdýrýnýz | ... \n tek-toplam:52 cift-ortalama:6

4- Kullanýcýnýn girdiði 5 sayýdan en büyüðünü ve en küçüðünü ekrana yazdýrýnýz | ... \n enbuyuk:14 enkucuk:3

5- Kenar özellikleri kullanýcý tarafýndan girilen üçgenin çizilip çizilemeyeceðini ekrana yazdýrýnýz | a:1 b:12 c:4 \n cizilemez

TESLÝM TARÝHÝ: 3 Mayýs 2021

*/

#include<stdio.h>
main() {
	
	// 1- 1'den kullanýcýnýn girdiði sayýya kadar olan sayýlarý ekrana yazdýrýnýz | sayi:8 \n 1,2,3,4,5,6,7
	int n,i=1;
	printf("sayi: ");
	scanf("%d",&n);
	while(i<n) {
		printf("%d,",i);
		i++;
	}
	printf("\n\n");
	
	// 2- Kullanýcýnýn girdiði 10 sayýnýn toplamýný ekrana yazdýrýnýz | ... \n toplam:16
	int sayi,toplam=0;
	for(i=0;i<10;i++) {
		printf("%d. sayi: ",i+1);
		scanf("%d",&sayi);
		toplam += sayi;
	}
	printf("toplam: %d\n\n",toplam);
	
	// 3- Kullanýcýnýn girdiði 10 sayýdan teklerin toplamýný, çiftlerin ortalamasýný yazdýrýnýz | ... \n tek-toplam:52 cift-ortalama:6
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
	
	// 4- Kullanýcýnýn girdiði 5 sayýdan en büyüðünü ve en küçüðünü ekrana yazdýrýnýz | ... \n enbuyuk:14 enkucuk:3
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
	
	// 5- Kenar özellikleri kullanýcý tarafýndan girilen üçgenin çizilip çizilemeyeceðini ekrana yazdýrýnýz | a:1 b:12 c:4 \n cizilemez
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
