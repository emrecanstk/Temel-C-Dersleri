/*

C Dersleri - 5 (Ýfade ve Teknolojiler)

1- Do while dögüsünden kýsaca bahsedilmesi

2- Goto ifadesinden kýsaca bahsedilmesi

3- Break ve continue ifadeleri

4- Switch Case kullanýmý

5- Switch Case ile basit hesap makinesi programý

6- Dizilere giriþ

*/

#include<stdio.h>
main() {
	
	// 1- Do while dögüsünden kýsaca bahsedilmesi
	int a=1;
	do {
		printf("%d ",a);
		a++;
	}
	while(a<=5);
	
	// 2- Goto ifadesinden kýsaca bahsedilmesi
	int b=1;
	islemler:
		printf("\n%d",b);
		b++;
	if(b<=5) {
		goto islemler;
	}
	
	// 3- Break ve continue ifadeleri
	int sayi,i=1;
	printf("\n10 sayi gir ama TEK sayi girersen YANARSÝN\n");
	while(i<=10) {
		printf("sayi: ");
		scanf("%d",&sayi);
		if(sayi%2==1) {
			printf("tek girdiginiz icin kaybettiniz.");
			break;
		}
		i++;
	}
	int girilen,j=1;
	printf("\n10 cift sayi gir ama TEK sayi girersen sayac artmayacak\n");
	while(j<=10) {
		printf("sayi: ");
		scanf("%d",&girilen);
		if(girilen%2==1) {
			printf("hadi ama adamim cift gir.");
			continue;
		}
		j++;
	}
	
	// 4- Switch Case kullanýmý
	int girilensayi;
	printf("1 2 3 sayilarindan birini giriniz: ");
	scanf("%d",&girilensayi);
	switch(girilensayi) {
		case 1:
			printf("1 sayisini girdiniz");
			break;
		case 2:
			printf("2 sayisini girdiniz");
			break;
		case 3:
			printf("3 sayisini girdiniz");
			break;
	}
	
	// 5- Switch Case ile basit hesap makinesi programý
	int secim,islem;
	float sayi1,sayi2;
	printf("\n1. Hesapla\n2. Kapat\n");
	scanf("%d",&secim);
	while(secim==1) {
		printf("1. Sayi: ");
		scanf("%f",&sayi1);
		printf("2. Sayi: ");
		scanf("%f",&sayi2);
		printf("\n1. Topla\n2. Cikar\n3. Carp\n4. Bol\n");
		scanf("%d",&islem);
		switch(islem) {
			case 1:
				printf("%.2f + %.2f = %.2f",sayi1,sayi2,sayi1+sayi2);
				break;
			case 2:
				printf("%.2f - %.2f = %.2f",sayi1,sayi2,sayi1-sayi2);
				break;
			case 3:
				printf("%.2f x %.2f = %.2f",sayi1,sayi2,sayi1*sayi2);
				break;
			case 4:
				printf("%.2f / %.2f = %.2f",sayi1,sayi2,sayi1/sayi2);
				break;
		}
		printf("\n1. Hesapla\n2. Kapat\n");
		scanf("%d",&secim);
	}	
}	
