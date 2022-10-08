#include <stdio.h>

int main()
{
	float a, b, c, A, B;
	printf("Nhap diem cac mon: ");
	scanf("%f",&a);	scanf("%f",&b); scanf("%f",&c);
	A= a+b+c;
	B=A/3;
	printf("\nTong diem cac mon : %f", A);
	printf("\nTrung binh mon: %f", B);

}
