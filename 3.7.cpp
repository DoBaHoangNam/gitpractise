#include <stdio.h>

int main()
{
	float a, b, c, A, B, C;
	printf("Nhap cac so: ");
	scanf("%f",&a);	scanf("%f",&b); scanf("%f",&c);
	A= a+b+c;
	B=A/3;
	C=a*b*c;
	printf("\nTong : %f", A);
	printf("\nTrung binh: %f", B);
	printf("\nTich: %f", C);
}
