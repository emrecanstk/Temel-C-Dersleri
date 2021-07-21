/*

C Dersleri - 2 (Operatörler)

1- Aritmatik Operatörler ( +  -  *  /  % )

2- Atama Operatörleri ( =  +=  -=  *=  /=  %=  ++ )

3- Arttýrma Azaltma Operatörleri ( ++  -- )

4- Ýliþkisel Operatörler ( ==  !=  >  >=  <  <= )

5- Mantýksal Operatörler ( &&  ||  !() )

6- Diðer Operatörler (virgül  sizeof  üçlü)

Detaylý Kaynak: https://www.cdersleri.com/c-operatorleri-c-operators

*/

#include<stdio.h>
main() {
	
	// 1- Aritmatik Operatörler ( +  -  *  /  % )
	printf("%d\n",5+3);
	printf("%d\n",5-3);
	printf("%d\n",5*3);
	printf("%.1f\n",5.0/3); // sonuç float olacaðý için iþleme de float deðer soktuk
	printf("%d\n",5%3);
	
	// 2- Atama Operatörleri ( =  +=  -=  *=  /=  %=  ++ )
	int a;
	a = 3;
	printf("\n%d",a);
	a += 5;          // a = a+5;
	printf("\n%d",a);
	a -= 7;          // a = a-7;
	printf("\n%d",a);
	a *= 6;          // a = a*6;
	printf("\n%d",a);
	a /= 3;          // a = a/3;
	printf("\n%d",a);
	a %= 2;          // a = a/3;
	printf("\n%d",a);
	a++;
	a--;             // a += 1;
	printf("\n%d",a);
	
	// 3- Arttýrma Azaltma Operatörleri ( ++  -- )
	int b=2;
	++b;             // b++;
	printf("\n%d",b);
	--b;             // b--;
	printf("\n%d",b);
	
	// 4- Ýliþkisel Operatörler ( ==  !=  >  >=  <  <= )
	printf("\n\n%d",4==4);
	printf("\n%d",3!=5);
	printf("\n%d",7>15);
	printf("\n%d",3>=3);
	printf("\n%d",1<6);
	printf("\n%d",5<=21);
	
	// 5- Mantýksal Operatörler ( &&  ||  !() )
	printf("\n");
	printf("%d\n",1<2 && 2>6); // True için ikisi de doðru olmalý
	printf("%d\n",1<2 || 2>6);  // True için bir tanesinin doðruluðu yeterli
	printf("%d",!(1<2));
}
