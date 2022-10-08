#include <stdio.h>

int main ()
{
	float X, Y, A, B, C;
	printf("Nhap so");
	printf("\nX: ");
	scanf("%f", &X);
	printf("Y: ");
	scanf("%f", &Y);
	A=X*X+Y*Y;
	B=(X+Y)*(X+Y);
	C=(X-Y)*(X-Y);
	printf("Cac gia tri can tim la: %.1f %.1f %.1f", A, B, C);
	
}

	
