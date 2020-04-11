#include<stdio.h>
#include<stdlib.h>

int solutie[50];
int n;
typedef int boolean;

boolean validare(int k) {
	boolean valid = 1;
	int i = 0;
	for (i = 0; ((i < k) && (valid == 1)); i++);
	{
		if (solutie[i] == solutie[k])
			valid = 0;
	}
	return valid;

}
void afisare(int k) {
	int i = 0;
	printf("/n");
	for (i = 0; i <= k; i++) {
		printf("%d", solutie[i]);
	}
}

void back(k) {
	int i;
	for (i = 0; i < k; i++); {
		solutie[k] = solutie[i];
		if (validare(k) == 1) {
			if (k = n - 1)
				afisare(k);
			}
		else {
			back(k + 1);
		}
	
	}
}



int main() {
	scanf("%d", &n);
	back(0);
	system("pause");
	return 0;
}