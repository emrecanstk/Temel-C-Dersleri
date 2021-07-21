/*

Örnekler - 3 (Zor)

Aþaðýdaki örnekleri:
-bir hafta sürede çözmelisiniz.
-þuana kadar öðrendiðiniz konular ile çözmelisiniz.
-yanlarýnda yer alan ÖRNEK çýktýlara dikkat ederek çözmelisiniz.
-seçtiðiniz çözüm yönteminin VERÝMLÝ olduðundan emin olarak çözmelisiniz.

Not: ÖRNEK çýktýlarda yer alan "\n" ibaresi, öncesinde kullanýcýnýn veri girdiðine iþarettir.
Not: ÖRNEK çýktýlar adý üzerinde örnek olduklarý için, birebir aynýsýný bastýrmaya çalýþmayýn.

1- Aþaðýdaki çýktýyý döngü kullanarak ekrana yazdýrýnýz
   x x x x x
   x x x x 
   x x x
   x x
   x

2- Aþaðýdaki çýktýyý döngü kullanarak ekrana yazdýrýnýz
   1 2 3 4 5
   2 3 4 5
   3 4 5
   4 5
   5

3- Kullanýcýnýn girdiði 15 sayýyý giriliþ sýrasýnýn tersine göre ekrana yazdýran program

4- Kullanýcýnýn girdiði 20 sayýyý ekrana tek olanlarý ayrý, çift olanlarý ayrý yazdýran program | ... \n tekler:   ciftler:

TESLÝM TARÝHÝ: 3 Mayýs 2021

*/

#include<stdio.h>
main() {
	
	// 1- Aþaðýdaki çýktýyý döngü kullanarak ekrana yazdýrýnýz
	int i,j;
	for(i=5;i>0;i--) {
		for(j=0;j<i;j++) {
			printf("x ");
		}
		printf("\n");
	}
	printf("\n\n");
	
	// 2- Aþaðýdaki çýktýyý döngü kullanarak ekrana yazdýrýnýz
	for(i=1;i<6;i++) {
		for(j=i;j<6;j++) {
			printf("%d ",j);
		}
		printf("\n");
	}
	printf("\n\n");
	
	// 3- Kullanýcýnýn girdiði 15 sayýyý giriliþ sýrasýnýn tersine göre ekrana yazdýran program
	int sayilar[15];
	for(i=0;i<15;i++) {
		printf("%d. sayi: ",i+1);
		scanf("%d",&sayilar[i]);
	}
	for(i=14;i>=0;i--) {
		printf("%d ",sayilar[i]);
	}
	printf("\n\n");
	
	// 4- Kullanýcýnýn girdiði 20 sayýyý ekrana tek olanlarý ayrý, çift olanlarý ayrý yazdýran program | ... \n tekler:   ciftler:
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
