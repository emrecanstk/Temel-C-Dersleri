/*

C Dersleri - 2 (Operat�rler)

1- Aritmatik Operat�rler ( +  -  *  /  % )

2- Atama Operat�rleri ( =  +=  -=  *=  /=  %=  ++ )

3- Artt�rma Azaltma Operat�rleri ( ++  -- )

4- �li�kisel Operat�rler ( ==  !=  >  >=  <  <= )

5- Mant�ksal Operat�rler ( &&  ||  !() )

6- Di�er Operat�rler (virg�l  sizeof  ��l�)

Detayl� Kaynak: https://www.cdersleri.com/c-operatorleri-c-operators

*/

#include<stdio.h>
main() {
	
	// 1- Aritmatik Operat�rler ( +  -  *  /  % )
	printf("%d\n",5+3);
	printf("%d\n",5-3);
	printf("%d\n",5*3);
	printf("%.1f\n",5.0/3); // sonu� float olaca�� i�in i�leme de float de�er soktuk
	printf("%d\n",5%3);
	
	// 2- Atama Operat�rleri ( =  +=  -=  *=  /=  %=  ++ )
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
	
	// 3- Artt�rma Azaltma Operat�rleri ( ++  -- )
	int b=2;
	++b;             // b++;
	printf("\n%d",b);
	--b;             // b--;
	printf("\n%d",b);
	
	// 4- �li�kisel Operat�rler ( ==  !=  >  >=  <  <= )
	printf("\n\n%d",4==4);
	printf("\n%d",3!=5);
	printf("\n%d",7>15);
	printf("\n%d",3>=3);
	printf("\n%d",1<6);
	printf("\n%d",5<=21);
	
	// 5- Mant�ksal Operat�rler ( &&  ||  !() )
	printf("\n");
	printf("%d\n",1<2 && 2>6); // True i�in ikisi de do�ru olmal�
	printf("%d\n",1<2 || 2>6);  // True i�in bir tanesinin do�rulu�u yeterli
	printf("%d",!(1<2));
}
