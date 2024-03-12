#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	float A = 0.0, B = 0.0, N1 = 0.0, N2 = 0.0;
	printf("Qua o valor de A? \n");
	scanf("%f", &N1);
	printf("Qual o valor de B? \n");
	scanf("%f", &N2);
	A = N2;
	B = N1;
	printf("O valor de A agora e: %.3f\n", A);
	printf("O valor de B agora e: %.3f\n", B);
	return 0;
}