#include <stdio.h>
#include <stdlib.h>

int Manna_Pnueli(int);

int main() {
	int x;
	printf("Introduceti x: "); scanf("%d", &x);
	printf("Rezultatul functiei Manna Pnueli este: %d", Manna_Pnueli(x));
}

int Manna_Pnueli(int x) {
	if (x > 11)
		return x - 1;
	return Manna_Pnueli(Manna_Pnueli(x + 2));
}
#include <stdio.h>
#include <stdlib.h>

#define varfMax 100
int stiva[varfMax], varf = 0;

void push(int x) {
	if (varf != varfMax - 1)
		stiva[++varf] = x;
	else
		printf("stiva este plina!\n");
}

void pop() {
	if (varf)
		--varf;
	else
		printf("Stiva este goala!\n");
}

int main() {
	int x;
	printf("Introduceti x: "); scanf("%d", &x);
	printf("Rezultatul functiei Manna Pnueli este: ");
	push(x);
	do {
		if (stiva[varf] > 11) {
			x = stiva[varf];
			pop();
			pop();
			stiva[varf] = x - 1;
		}
		else
			push(stiva[varf] + 2);
	} while (varf);
	printf("%d\n", stiva[0]);
	system("pause");
}
#include <stdio.h>
#include <stdlib.h>

unsigned Ackermann(int, int);

int main() {
	unsigned x, y;
	printf("Introduceti x: "); scanf("%u", &x);
	printf("Introduceti y: "); scanf("%u", &y);
	printf("Rezultatul functuiei Ackermann %d\n", Ackermann(x, y));
	system("pause");
}

unsigned Ackermann(unsigned x, unsigned y) {
	if (!x)
		return y + 1;
	else if (!y)
		return Ackermann(x - 1, 1);

	return Ackermann(x - 1, Ackermann(x, y - 1));
}
