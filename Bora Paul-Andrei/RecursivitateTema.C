#include <stdlib.h>
#include<stdio.h>

int n;
int a, b;
int suma(int n) {
	if (n == 0)
		return 0; 
	else
		return n + suma(n - 1);
}

long int factorial(int n) {
	if ((n != 1) && (n != 0))
		return n * factorial(n - 1);
	else
		return 1;
}

int suma_cifre(int n) {
	if (n >= 10)
		return n % 10 + suma_cifre(n / 10);
	else
		return n;
}
int cmmdc(int a, int b) {
	if (a == b)
		return a;
	else
		if (a > b)
			cmmdc(a - b, b);
		else
			cmmdc(a, b - a);
}
int fibo(int n) {
	if (n <= 2)
		return  n;
	else {
		return fibo(n - 1) + fibo(n - 2);
	}
}
int inv(int n) {
	if (n >= 10)
		return  n % 10 * 10 + inv(n /10);
	else
		return n;
}

int main(){
printf("Dati nr n\n");
scanf("%d", &n);
printf("Suma este %d\n", suma(n));
printf("Factorialul este %d\n", factorial(n));
printf("Suma cifrelor este %d\n", suma_cifre(n));
printf("Primene %d numere din sirul lui fibnonacci sunt\n", n);
printf("%d\n", fibo(n));
printf("Numarul %d inversat este %d\n", n,inv(n));
printf("Dati nr a\n");
scanf("%d", &a);
printf("Dati nr b\n");
scanf("%d", &b);
printf("Divizorul comun a lui %d si %d este %d \n",a, b, cmmdc(a,b));
system("pause");
return 0;
}