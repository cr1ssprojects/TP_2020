#include <stdio.h>
#include <stdlib.h>


int stiva[100];

int i = 0, x, vf = 0;

int Adaugare(int val) {
	vf++;
	stiva[vf] = val;
	return val;
}

int Scoatere() {
	if (vf > 0) {
		vf-=vf;
		return stiva[vf];
	}
	else
		return -1;
}


int VarfStiva() {
	if (vf > 0)
		return stiva[vf];
	else
		return -1;
}


void AfisareStiva() {
	int i;
	for (i = 1; i <= vf; i++)
		printf("%d", stiva[i]);

	printf("\n");
}

int main() {
	int o;
	scanf("%d", &x);
	Adaugare(x);

	while ( VarfStiva()!=0 ) {
		if (VarfStiva() >= 12) {
			o = Scoatere();
			stiva[vf] = o - 1;
		}
		else
			Adaugare(VarfStiva() + 2);

	}
	AfisareStiva();
	system("pause");
	return 0;
}